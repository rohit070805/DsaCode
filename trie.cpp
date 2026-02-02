/*
Every Node will have 3 things
    - Value
    - List of Children {array/map}
    - bool val isTerminal {To check if is end of the string}
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
int main(){
    TrieNode* root = new TrieNode('-');
    insertinTrie(root,"Rohit");
}