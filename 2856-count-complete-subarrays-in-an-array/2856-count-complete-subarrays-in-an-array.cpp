class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int cnt = 0;
        unordered_map<int , int>mp;

        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        } 

        for(int i=0;i<nums.size();i++){
            set<int>s;
            for(int j=i;j<nums.size();j++){
                s.insert(nums[j]);
                if(mp.size() == s.size()){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};