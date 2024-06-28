// 208. D80_M_Implement_Trie_Prefix_Tree
class TrieNode{
public:
    vector<TrieNode*>child;
    bool wordend;
    TrieNode(): child(26,nullptr), wordend(false){}
};
class Trie {
private: TrieNode* root;
public:
    Trie() {
        root = new TrieNode();
    }
    
    void insert(string word) {
        TrieNode* current= root;
        for(auto c:word){
            if(current->child[c-'a']==NULL){
                current->child[c-'a']=new TrieNode();
            }
            current=current->child[c-'a'];
        }
        current->wordend=true;
    }
    
    bool search(string word) {
        TrieNode* current= root;
        for(auto c:word){
            if(current->child[c-'a']==NULL) return false;
            current=current->child[c-'a'];
        }
        return (current->wordend==true);

    }
    
    bool startsWith(string prefix) {
        TrieNode* current=root;
        for(auto c: prefix){
            if(current->child[c-'a']==NULL) return false;
            current=current->child[c-'a'];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */

//  Q:https://leetcode.com/problems/implement-trie-prefix-tree/