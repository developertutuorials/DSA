class Solution {
public:
    int x[4]={-1,1,0,0};
    int y[4]={0,0,-1,1};
    bool valid(int i,int j, int n,int m){
        if(i<0 || i>=n || j<0 ||j>=m){
            return false;
        }
        return true;
    }
    int dfs(vector<vector<int>> &grid,int i,int j,int n,int m,vector<vector<bool>>& vis){
        int areacount=0;
        vis[i][j]=1;
        queue<pair<int,int>>q;
        q.push({i,j});
        while(!q.empty()){
            int s =q.size();
            while(s--){
                pair<int,int>p=q.front();
                int r =p.first;
                int c =p.second;
                areacount++;
                q.pop();
                for(int k=0;k<4;k++){
                    int row =r+x[k];
                    int col=c+y[k];
                    if(valid(row,col,n,m) and grid[row][col]==1 and vis[row][col]==0){
                        vis[row][col]=1;
                        q.push({row,col});
                        
                    }
                }
            }
            
        }
        return areacount;
        
        
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m =grid[0].size();
        int res =0;
        vector<vector<bool>>vis(n,vector<bool>(m,0));
        for(int i =0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1 and vis[i][j]==0){
                   int areacount =dfs(grid,i,j,n,m,vis);
                    res=max(res,areacount);
                }
            }
        }
        return res;
    }
};