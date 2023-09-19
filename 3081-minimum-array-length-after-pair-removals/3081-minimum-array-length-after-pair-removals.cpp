class Solution {
public:
    int minLengthAfterRemovals(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int , int>mp;

        for(auto i:nums){
            mp[i]++;
        } 

        int mx = 0;

        for(auto i:mp){
            mx = max(mx , i.second);
        } 

        if(mx <= n/2){
            if(n%2 == 0) return 0;
            else return 1;
        } 
        return 2*mx-n;
    }
};