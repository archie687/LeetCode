class Solution {
public:
    bool canSplitArray(vector<int>& nums, int m) {
        if(nums.size() <= 2) return true;
        int sum = 0;
        for(int i=0;i<nums.size()-1;i++){
            sum = nums[i]+nums[i+1];
            if(sum >= m){
                return true;
            } 
        }  
        return false;
    }
};