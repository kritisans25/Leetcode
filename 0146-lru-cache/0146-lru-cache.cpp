class LRUCache {
private:
    int capacity;
    list<pair<int,int>>cache;
    unordered_map<int, list<pair<int, int>>::iterator> mp;
public:
    LRUCache(int capacity) {
        this->capacity=capacity;
    }
    
    int get(int key) {
        if(mp.find(key)==mp.end()){
            return -1;
        }
        cache.splice(cache.begin(),cache,mp[key]);
        return mp[key]->second;
    }
    
    void put(int key, int value) {
        if (mp.find(key) != mp.end()) {
            mp[key]->second = value;
            cache.splice(cache.begin(), cache, mp[key]);
            return;
        }
        if (cache.size() == capacity) {
            int lruKey = cache.back().first;

            mp.erase(lruKey);
            cache.pop_back();
        }
        cache.push_front({key, value});
        mp[key] = cache.begin();
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */