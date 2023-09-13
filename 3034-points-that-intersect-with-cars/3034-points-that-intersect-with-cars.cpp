class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        int ans = 0 , k = 0;

        sort(nums.begin() , nums.end());

        for(int i=0;i<nums.size();i++){
            if(nums[i][1] > k){
                ans += nums[i][1] - max(nums[i][0]-1 , k);
            } 
            k = max(nums[i][1] , k);
        } 
        return ans;
    }
};