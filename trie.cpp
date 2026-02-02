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
    cout<<"Inserting from "<<s<<endl;
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
int main(){
    TrieNode* root = new TrieNode('-');
    insertinTrie(root,"Rohit");
    insertinTrie(root,"Mandeep");
    deleteinTrie(root,"Rohit");
    cout<<searchinTrie(root,"Rohit");
}