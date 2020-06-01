class Node{
    public:
    Node *node[26];
    bool is_word;
    Node(){
        is_word = false;
        for(int i=0;i<26;i++)
            node[i] = NULL;
    }
};

class Trie {
public:
    /** Initialize your data structure here. */
    
    Trie() {        
        root = new Node();
    }
      
    /** Inserts a word into the trie. */
    void insert(string word) {
        Node *tmp = root;
        for(int i=0;i<word.size();i++){
            int ch = word[i]-'a';
            if(!tmp->node[ch]){
                tmp->node[ch] = new Node();
            }
            tmp = tmp->node[ch];
        }
        tmp->is_word = true;
        
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        Node *tmp = root;
        for(int i=0;i<word.size();i++){
            int ch = word[i]-'a';
            if(!tmp->node[ch]){
                return false;
            }
            tmp = tmp->node[ch];
        }
        return tmp->is_word;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        Node *tmp = root;
        for(int i=0;i<prefix.size();i++){
            int ch = prefix[i]-'a';
            if(!tmp->node[ch]){
                return false;
            }
            tmp = tmp->node[ch];
        }
        return true;
    }
    
private:
    Node *root;
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
