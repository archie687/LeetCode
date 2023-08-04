class Solution {
public:
    int findLHS(vector<int>& nums) {
        int ans = 0;
        unordered_map<int , int>mp;

        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        } 

        for(auto i:mp){
            auto found = mp.find(i.first+1);

            if(found != mp.end()){
                ans = max(ans , i.second+found->second);
            } 
        } 

        return ans;
    }
};