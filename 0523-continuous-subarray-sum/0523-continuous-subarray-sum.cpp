class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        
        unordered_map<int , int>mp;
        int sum = 0 , n = nums.size();
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            sum %= k;

            if(sum == 0 && i > 0) return true;

            if(mp.find(sum) == mp.end()){
                mp[sum] = i;
            } 
            else{
                if(i-mp[sum] > 1) return true;
            }
        } 
        return false;
    }
};