#include <iostream>
using namespace std;

class TrieNode {
   public:
    char data;
    TrieNode **children;
    bool isTerminal;

    TrieNode(char data) {
        this->data = data;
        children = new TrieNode *[26];
        for (int i = 0; i < 26; i++) {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie {
    n

   public:
    Trie() {
        root = new TrieNode('\0');
    }

    void insertWord(TrieNode *root, string word) {
        // Base case
        if (word.size() == 0) {
            root->isTerminal = true;
            return;
        }

        // Small Calculation
        int index = word[0] - 'a';
        TrieNode *child;
        if (root->children[index] != NULL) {
            child = root->children[index];
        } else {
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        // Recursive call
        insertWord(child, word.substr(1));
    }

    void insertWord(string word) {
        insertWord(root, word);
    }
    bool searchHelper(TrieNode *root, string word){
        
        if(word.size()==0){
            if(root->isTerminal==true)
                return true;
            else
                return false;
        }
        
        int index=word[0]-'a';
        
        TrieNode * smallOutput;
        bool ans;
        if(root->children[index]!=NULL){
            smallOutput=root->children[index];
            ans=searchHelper(smallOutput,word.substr(1));
        }
        else{
            ans=false;
        }
        
        return ans;
        
    }
    bool search(string word) {
        return searchHelper(root,word);

    }
    
    void removeWordHelper(TrieNode *root, string word){
        
        if(word.size()==0){
            
            root->isTerminal=false;
            
        }
        
        int index=word[0]-'a';
        
        if(root->children[index]!=NULL){
            
            removeWordHelper(root->children[index], word.substr(1));
  
        }
        
        
        
    }
    
    void removeWord(string word){
        removeWordHelper(root, word);
        return;
    }
    
    
};
