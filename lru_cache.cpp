#include<bits/stdc++.h>
int cap;
unordered_map<int, int> lru;
list<int> aq;

LRUCache::LRUCache(int capacity) {
    cap = capacity;
    lru.clear();
    aq.clear();
}

void updateAccess(int key){
    for(auto i=aq.begin(); i!= aq.end(); i++)
        if(*i == key){
            aq.erase(i);
            break;
        }
    aq.push_front(key);
    return;
}

int LRUCache::get(int key) {
    if(lru.find(key) != lru.end()){
        updateAccess(key);
        return lru[key];
    }
    else
        return -1;
}

void LRUCache::set(int key, int value) {
    if(lru.find(key) != lru.end())
        lru[key] = value;
    else{
        if(lru.size() == cap){
            lru.erase(aq.back());
            aq.pop_back();
        }
        lru[key] = value;
    }
    updateAccess(key);
    return;
}