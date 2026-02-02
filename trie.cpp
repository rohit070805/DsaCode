/*
Every Node will have 3 things
    - Value
    - List of Children {array/map}
    - bool val isTerminal {To check if is end of the string}
Deletion in Trie
    - Trie me delete krna hai to bs string ke end pe jake isTerminal ko false krdo
    - Yaha agr erase krenfe chize to baki ki strings bhi affect ho jayengi
*/
#include<iostream>
#include<vector>
using namespace std;
class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;
    TrieNode(char ch){
        this->data = ch;
        for(int i =0;i<26;i++){
            this->children[i]=NULL;
        }
        this->isTerminal =false;
    }
};
// Time complexity = length of string to be inserted O(K) for all insert/delete/search
void insertinTrie(TrieNode* root,string s){
    
    if(s.length()==0){
        root->isTerminal = true;
        return;
    }
    
    TrieNode* child;
    if(root->children[s[0]-'a']!=NULL){
            child = root->children[s[0]-'a'];
    }else{
        child = new TrieNode(s[0]);
        root->children[s[0]-'a'] = child;
    }
    insertinTrie(child,s.substr(1));
}

 bool searchinTrie(TrieNode* root,string word) {
        TrieNode* temp = root;
        for(auto ch:word){
            if(temp->children[ch-'a']==NULL) return false;
            temp = temp->children[ch-'a'];
        }
        return temp->isTerminal;
    }
void deleteinTrie(TrieNode* root,string s){
    
    if(s.length()==0){
        root->isTerminal = false;
        return;
    }
    
    TrieNode* child;
    if(root->children[s[0]-'a']!=NULL){
            child = root->children[s[0]-'a'];
    }else{
        return;
    }
    deleteinTrie(child,s.substr(1));
}
void  getallPossibleCombo(TrieNode* root,vector<string>& ans,string temp){
            if(root->isTerminal) ans.push_back(temp);
             for(int i =0;i<26;i++){
                if(root->children[i]!=NULL){
                    char ch = root->children[i]->data;
                    temp = temp+ch;
                    getallPossibleCombo(root->children[i],ans,temp);
                    temp.pop_back();
                }
             }
}
vector<string> autoComplete(TrieNode* root,string prefix){
    for(auto ch :prefix){
        if(root->children[ch-'a']==NULL)return {};
        root = root->children[ch-'a'];
    }  
    
    vector<string> ans;
    getallPossibleCombo(root,ans,prefix);
    return ans;
}
vector<vector<string>> autoCompleteEveryCharacter(TrieNode* root,string prefix){
    vector<vector<string>> ans;
   
    for(int i =0;i<prefix.size();i++){
        char ch = prefix[i];
        if(root->children[ch-'a']==NULL)return {};
        root = root->children[ch-'a'];
         vector<string> temp;
      getallPossibleCombo(root,temp,prefix.substr(0,i+1));
     ans.push_back(temp);
        
    }  

    return ans;
}

int main(){
    TrieNode* root = new TrieNode('-');
    insertinTrie(root,"rohit");
    insertinTrie(root,"roni");
    insertinTrie(root,"rohuu");
    insertinTrie(root,"aman");
    insertinTrie(root,"ramesh");
    
    vector<vector<string>> allCombos = autoCompleteEveryCharacter(root,"roh");
    for(auto v:allCombos){
        for(auto s:v){
            cout<<s<<" ";
        }
        cout<<endl;
    }
    return 0;
}