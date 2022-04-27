class UnionFind {
private:
    vector<int> parent;
public:
    UnionFind(int n){
        parent.resize(n);
        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }
    }
    
    int find(int a) {
        if (parent[a] == a) {
            return a;
        }
        return parent[a] = find(parent[a]);
    }

    void Union(int a, int b) {
        int rootA = find(a);
        int rootB = find(b);
        if (rootA != rootB) 
            parent[rootB] = rootA;
    }
};
class Solution {
public:
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        UnionFind UF(s.length());
        for(int i = 0 ; i < pairs.size() ; i++){
            UF.Union(pairs[i][0],pairs[i][1]);
        }
        
        vector<char> result(s.length(),' ');
        unordered_map<int,vector<char>> charGroup;
        unordered_map<int,vector<int>> charIndex;
        for(int i = 0 ; i < s.length() ; i++){
            int parentOfElement = UF.find(i);
            charGroup[parentOfElement].push_back(s[i]);
            charIndex[parentOfElement].push_back(i);
        }
        vector<char> charVec;
        vector<int> indexVec;
        unordered_map<int, vector<char>>::iterator it = charGroup.begin();
        while(it!=charGroup.end()){
            charVec = it->second;
            indexVec = charIndex[it->first];
            sort(charVec.begin(),charVec.end());
            sort(indexVec.begin(),indexVec.end());
            for(int i = 0 ; i < charVec.size() ; i++){
                result[indexVec[i]] = charVec[i];
            }
            it++;
        }
        string resultString(result.begin(),result.end());
        return resultString;
        
    }
};