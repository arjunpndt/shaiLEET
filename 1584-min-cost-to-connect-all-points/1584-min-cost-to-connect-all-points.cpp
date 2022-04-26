class Solution {
public:
    
    class Node {
        public:
            int x, y, dis;
        
        Node(int x, int y, int dis) {
            
            this->x = x;
            this->y = y;
            this->dis = dis;
        }
    };
    
    int findParent(int u, int parent[]) {
        if(u == parent[u])
            return u;
        
        return findParent( parent[u], parent);
    }
    int minCostConnectPoints(vector<vector<int>>& points) {
       vector <Node*> graph;
        for(int i = 0 ; i < points.size() ; i++) {
            for(int j =  0 ; j < points.size() & j != i ; j++) {
                
                int dis = abs(points[i][0] - points[j][0]) + 
                          abs(points[i][1] - points[j][1]);
                Node *n = new Node(i, j, dis);
                graph.push_back(n);
            }
        }
        
        sort(graph.begin(), graph.end(), [](Node *a, Node *b){
            
            return a->dis < b->dis;
        });
        
        int *parent = new int[points.size()];
        for(int i = 0 ;  i< points.size() ; i++) 
        {
            parent[i] = i;
        }
        
        int ans = 0;
        for(int i = 0 ;  i< graph.size() ; i++) {
            int x = findParent(graph[i]->x, parent);
            int y = findParent(graph[i]->y, parent);
            
            if(x != y) {
                
                ans = ans + graph[i]->dis;
                parent[y] = x;
            }
            
        }
        return ans;
    }
};