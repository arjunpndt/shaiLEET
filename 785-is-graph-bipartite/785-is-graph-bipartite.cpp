class Solution {
public:
    
    bool isBipartite(vector<vector<int>>& graph,int root,vector<int>& color){
		//bfs
        queue<int> Q;
        Q.push(root);
        color[root] = 1;
        while(!Q.empty()){
            int node = Q.front();Q.pop();
            for(int& nbr:graph[node]){
                if(color[nbr] == -1){
				     // if color[node] = 1 then color[nbr] = 0 and
					 // if color[node]= 0 then color[nbr] = 1
                    color[nbr] = 1-color[node]; 
                    Q.push(nbr);
                }else if(color[nbr] == color[node]){
                    return false;
                }
            }
        }
        return true;
    }
    
    bool isBipartite(vector<vector<int>>& graph) {
        int nodes = graph.size();
        vector<int> color(nodes,-1);
        
        // component check
        for(int i=0;i<nodes;i++){
            if(color[i] == -1){
                // check bfs
                if(!isBipartite(graph,i,color)){
                    return false;
                }
            }
        }
        
        return true;
    }
};