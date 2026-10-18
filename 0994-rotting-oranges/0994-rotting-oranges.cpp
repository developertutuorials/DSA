class Solution {
public:
    int x[4]={-1,1,0,0};
    int y[4]={0,0,-1,1};

    bool valid(int n,int m,int i,int j){
        if((i<0|| i>=n )|| (j<0 || j>=m)){
            return false;
        }
        return true;
    }
    int orangesRotting(vector<vector<int>>& grid) { 
        int n=grid.size();
        int m =grid[0].size();
        queue<pair<int,int>>q;
        int time=0;
        int fresh=0;
        for(int i =0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    q.push({i,j});
                    grid[i][j]=-2;
                }
                else if(grid[i][j]==1){
                    fresh++;
                }
            }
        }
        while(!q.empty() and fresh>0){
            int s =q.size();
            time++;
            while(s--){
                pair<int,int>p=q.front();
                q.pop();
                int r=p.first;
                int c=p.second;
                for(int k=0;k<4;k++){
                    int row=r+x[k];
                    int col=c+y[k];
                    if(valid(n,m,row,col) and grid[row][col]==1){
                        q.push({row,col});
                        grid[row][col]=-2;
                        fresh--;
                    }
                }
            }
        }
        if(fresh>0){
            return -1;
        }
        return time;
    }
};