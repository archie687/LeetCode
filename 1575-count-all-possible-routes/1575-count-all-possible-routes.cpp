class Solution {
public:

    int helper(vector<int>& locations , int start , int finish , int remaining_fuel , vector<vector<int>> &dp){
        if(remaining_fuel < 0) return 0;

        if(dp[start][remaining_fuel] != -1) return dp[start][remaining_fuel];

        int ans = start==finish ? 1:0;
        for(int i=0;i<locations.size();i++){
            if(i != start){
                ans = (ans + helper(locations , i , finish , remaining_fuel-(abs(locations[i]-locations[start])), dp))%1000000007;
            }
        } 
        return dp[start][remaining_fuel] = ans;
    }

    int countRoutes(vector<int>& locations, int start, int finish, int fuel) {
        int n = locations.size();
        vector<vector<int>>dp(n , vector<int>(fuel+1 , -1));

       return helper(locations , start , finish , fuel , dp);
    }
};