146. LRU Cache

class LRUCache {
public:
    int size;
    list<int>lru;
    unordered_map<int,list<int>::iterator>m;
    unordered_map<int,int>kv;
    
    LRUCache(int capacity) {
        size = capacity;
    }
    
    int get(int key) {
        if(kv.count(key) == 0)
            return -1;
        updateLRU(key);
        return kv[key];
    }
    
    void put(int key, int value) {
        if(kv.size() == size && !kv.count(key))
            evict();
        updateLRU(key);
        kv[key] = value;
    }
    
    void updateLRU(int key)
    {
        if(kv.count(key))
            lru.erase(m[key]);
        lru.push_front(key);
        m[key] = lru.begin();
    }
    
    void evict()
    {
        m.erase(lru.back());
        kv.erase(lru.back());
        lru.pop_back();
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache obj = new LRUCache(capacity);
 * int param_1 = obj.get(key);
 * obj.put(key,value);
 */