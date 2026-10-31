class Solution {
public:
    int x[4]={-1,1,0,0};
    int y[4]={0,0,-1,1};
    bool valid(int i,int j,int n,int m){
        if(i<0 || i>=n || j<0 || j>=m){
            return false;
        }
        return true;
    }
    int orangesRotting(vector<vector<int>>& grid) { 
       int n = grid.size();
       int m = grid[0].size();
       int fresh=0;
       int time=0;
       queue<pair<int,int>>q;
       for(int i =0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]==1){
                fresh++;
            }
            else if(grid[i][j]==2){
                q.push({i,j});
                grid[i][j]= -2;
            }
        }
       }
       while(!q.empty() and fresh>0){
        int s =q.size();
        time++;
        while(s--){
            pair<int,int> rotten =q.front();
            int r =rotten.first;
            int c=rotten.second;
            q.pop();
            for(int k=0;k<4;k++){
                int row =r+x[k];
                int col=c+y[k];
                if(valid(row,col,n,m) and grid[row][col]==1){
                    grid[row][col]=-2;
                    q.push({row,col});
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