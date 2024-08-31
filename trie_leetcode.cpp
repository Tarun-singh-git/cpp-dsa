//208. Implement Trie (Prefix Tree) leetcode solution by tarun
//TC-O(length of word)
class Trie {
    TrieNode*root;
public:
    Trie() {
        root=new TrieNode('\0');
    }
    void insertutil(TrieNode*root,string word){
        if(word.length()==0){
            root->isTerminal=true;
            return;
        }
        int index=word[0]-'a';
        TrieNode*child;
        if(root->children[index]!=NULL){
            child=root->children[index];
        }
        else{
            child= new TrieNode(word[0]);
            root->children[index]=child;
        }
        insertutil(child,word.substr(1));
    }

    
    void insert(string word) {
        insertutil(root,word);
    }
    bool searchutil(TrieNode*root,string word){
        if(word.length()==0){
            return root->isTerminal;
        }
        int index=word[0]-'a';
        TrieNode*child;
        if(root->children[index]!=NULL){
            child=root->children[index];
        }
        else{
            return false;
        }
        return searchutil(child,word.substr(1));
    }
    bool search(string word) {
        return searchutil(root,word);
    }
    bool prefixutil(TrieNode*root,string word){
        if(word.length()==0){
            return true;
        }
        int index=word[0]-'a';
        TrieNode*child;
        if(root->children[index]!=NULL){
            child=root->children[index];
        }
        else{
            return false;
        }
        return prefixutil(child,word.substr(1));
    }
    bool startsWith(string prefix) {
          return prefixutil(root,prefix);
    }
};
