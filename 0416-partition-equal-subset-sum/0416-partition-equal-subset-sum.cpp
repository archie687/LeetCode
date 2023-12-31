class Solution {
public:

bool subsetsum(int index,int target,vector<int>& nums,vector<vector<int>>& dp){
    if(target==0){
        return true;
    }
    
    if(index==0){
        return nums[0]==target;
    }

    if(dp[index][target] != -1){
        return dp[index][target];
    }

    bool nottake = subsetsum(index-1,target,nums,dp);
    bool take = false;
    if(nums[index] <=target){
        take = subsetsum(index-1,target-nums[index],nums,dp);
    }
    return dp[index][target] = take || nottake;
}
    bool canPartition(vector<int>& nums) {
        int totsum=0;
        int n=nums.size();
        for(int i =0; i<n; i++){
            totsum += nums[i];
        }
        if(totsum % 2 != 0){
            return false;
        }
        int target = totsum/2;
        vector<vector<int>> dp(n+1,vector<int>(target+1,-1));
        return subsetsum(n-1,target,nums,dp);
    }
};