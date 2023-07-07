class Solution {
public:

    int helper(vector<int>& arr , int left , int right , vector<vector<int>>& dp , map<pair<int,int> , int>& mp){
        if(left == right) return 0;
        int ans = INT_MAX;
        if(dp[left][right] != -1) return dp[left][right];

        for(int i=left;i<right;i++){
             ans = min(ans , mp[{left,i}]*mp[{i+1 , right}] + helper(arr , left , i , dp , mp) + helper(arr , i+1 , right , dp , mp));

        } 
        return dp[left][right] = ans;
    }

    int mctFromLeafValues(vector<int>& arr) {
        int n = arr.size();
        vector<vector<int>>dp(n+1 , vector<int>(n+1 , -1));
        map<pair<int,int> , int>mp;

        for(int i=0;i<arr.size();i++){
            mp[{i,i}] = arr[i];
            for(int j=i+1;j<arr.size();j++){
                mp[{i,j}] = max(arr[j] , mp[{i , j-1}]);
            }
        }
        return helper(arr , 0 , n-1 , dp , mp);
    }
};