//Q. 139

//Trie Solution -- TLE is coming on 29th testcase.

class Solution {
public:
    struct TrieNode 
{ 
    struct TrieNode *children[26]; 
  
    // isEndOfWord is true if the node represents 
    // end of a word 
    bool isEndOfWord; 
}; 
  
// Returns new trie node (initialized to NULLs) 
struct TrieNode *getNode(void) 
{ 
    struct TrieNode *pNode =  new TrieNode; 
  
    pNode->isEndOfWord = false; 
  
    for (int i = 0; i < 26; i++) 
        pNode->children[i] = NULL; 
  
    return pNode; 
} 
  
// If not present, inserts key into trie 
// If the key is prefix of trie node, just 
// marks leaf node 
void insert(struct TrieNode *root, string key) 
{ 
    struct TrieNode *pCrawl = root; 
  
    for (int i = 0; i < key.length(); i++) 
    { 
        int index = key[i] - 'a'; 
        if (!pCrawl->children[index]) 
            pCrawl->children[index] = getNode(); 
  
        pCrawl = pCrawl->children[index]; 
    } 
  
    // mark last node as leaf 
    pCrawl->isEndOfWord = true; 
} 
  
// Returns true if key presents in trie, else 
// false 
bool search(struct TrieNode *root, string key) 
{ 
    struct TrieNode *pCrawl = root; 
  
    for (int i = 0; i < key.length(); i++) 
    { 
        int index = key[i] - 'a'; 
        if (!pCrawl->children[index]) 
            return false; 
  
        pCrawl = pCrawl->children[index]; 
    } 
  
    return (pCrawl != NULL && pCrawl->isEndOfWord); 
} 
    
    bool solve(string s,struct TrieNode* root)
    {
        int sz = s.size();
        if(sz == 0)
            return true;
       for(int i=1;i<=sz;i++)
        {
            if(search(root,s.substr(0,i)) && solve(s.substr(i,sz-i),root))
                return true;
        }
        return false;
    }
    
    bool wordBreak(string s, vector<string>& wordDict) {
        // if(s.length() == 0)
        //     return true;
        struct TrieNode* root = getNode();
       for(int i=0;i<wordDict.size();i++)
           insert(root,wordDict[i]);
        bool ans = solve(s,root);
        
        return ans;
    }
};