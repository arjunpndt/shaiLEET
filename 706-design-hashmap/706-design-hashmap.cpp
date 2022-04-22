class MyHashMap {
public:
    vector<int> hashMap;
    int size;
    MyHashMap() {
        size = 1e6+1;
        hashMap.resize(size);
        fill(hashMap.begin(),hashMap.end(),-1);
    }
    
    void put(int key, int value) {
        hashMap[key] = value;
    }
    
    int get(int key) {
        return hashMap[key];
    }
    
    void remove(int key) {
        hashMap[key] = -1;
    }
};