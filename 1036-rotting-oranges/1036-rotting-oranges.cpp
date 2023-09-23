class Solution {
public:
    void dfs(vector<vector<int>>&grid,int i,int j,int min){ 
if(i<0 || j<0 || j>grid[0].size()-1 || i>grid.size()-1 ||  grid[i][j]==0 || (1 < grid[i][j] and grid[i][j] < min)){
            return ;
        }
          grid[i][j]=min;                                                                                          
       dfs(grid,i+1,j,min+1); 
       dfs(grid,i,j+1,min+1); 
       dfs(grid,i-1,j,min+1); 
       dfs(grid,i,j-1,min+1);                                                                                                                          
    }
    int orangesRotting(vector<vector<int>>& grid) {
        int min=2;
        int n=grid.size();
        int m=grid[0].size();
        // if(n==1 && m==1){
        //     if(grid[0][0]==1){
        //         return -1;
        //     }
        //      if(grid[0][0]==0){
        //         return 0;
        //     }
        //      if(grid[0][0]==2){
        //         return 0;
        //     }
        // }
       
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==2){
                    dfs(grid,i,j,min);
                }
            }
        }
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    return -1;
                }
               maxi=max(maxi,grid[i][j]); 
              
            }
        }
       
        if(maxi==0){
            return 0;
        }
        return  maxi-2;
        
    }
};