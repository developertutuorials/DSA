class Solution {
public:
    bool res = true;
    void dfs(vector<vector<int>>& adj,int node,int c,vector<int>& colour){
        colour[node]=c;
        for(int i =0;i<adj[node].size();i++){
            int neigh = adj[node][i];
            if(colour[neigh] != -1 and colour[neigh]==c){
                res= false;
            }
            if(colour[neigh]==-1){
                dfs(adj,neigh,1-c,colour);
            }
        }
        return;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int>colour(n,-1);
        for(int i =0;i<n;i++){
            if(colour[i]==-1){
                dfs(graph,i,0,colour);
            }
        }
        return res;
    }
};