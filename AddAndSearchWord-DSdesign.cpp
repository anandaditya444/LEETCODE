//Q.211

class WordDictionary {
public:
    struct TrieNode
    {
      struct TrieNode* children[26];
        bool isEndOfWord;
    };
    
    struct TrieNode* getNode()
    {
        struct TrieNode* node = new TrieNode;
        
        node->isEndOfWord = false;
        for(int i=0;i<26;i++)
            node->children[i] = NULL;
        
        return node;
    }
    /** Initialize your data structure here. */
    WordDictionary() {
        
    }
    struct TrieNode* root = getNode();
    /** Adds a word into the data structure. */
    void addWord(string word) {
        struct TrieNode* node = root;
       // node = root;
        for(int i=0;i<word.length();i++)
        {
            int idx = word[i] - 'a';
            if(node->children[idx] == NULL)
                node->children[idx] = getNode();
            node = node->children[idx];
        }
        node->isEndOfWord = true;
    }
    
    /** Returns if the word is in the data structure. A word could contain the dot character '.' to represent any one letter. */
    bool search(string word) {
        struct TrieNode* node = root;
       // node = root;
        for(int i=0;i<word.length();i++)
        {
            int idx = word[i] - 'a';
            if(node->children[idx] == NULL)
                return false;
            node = node->children[idx];
        }
        return (node != NULL && node->isEndOfWord);
        
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */