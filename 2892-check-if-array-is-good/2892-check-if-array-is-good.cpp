class Solution {
public:
    bool isGood(vector<int>& nums) {
        unordered_map<int , int>mp;
        int n = nums.size();
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        } 

        for(int i=1;i<=nums.size()-1;i++){
            if(mp[i] != 2 && i == n-1) return false;
            else if(i != n-1 && mp[i] != 1) return false;
        } 
        if(mp.size() != n-1) return false;
        return true;
    }
};