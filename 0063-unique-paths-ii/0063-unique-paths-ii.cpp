class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        if(obstacleGrid.empty() || obstacleGrid[0][0] == 1) return 0;
        
        int row = obstacleGrid.size();
        int col = obstacleGrid[0].size();

        vector<int>dp(col , 0);

        dp[0] = 1;

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(obstacleGrid[i][j] == 1) {
                    dp[j] = 0;
                } 

                else if(j > 0){
                    dp[j] += dp[j-1];
                }
            }
        }
        return dp[col-1];
    }
};