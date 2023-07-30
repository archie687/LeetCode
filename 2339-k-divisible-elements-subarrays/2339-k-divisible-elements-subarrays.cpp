class Solution {
public:
    int countDistinct(vector<int>& nums, int k, int p) {
        set<vector<int>>ans;
        
        for(int i=0;i<nums.size();i++){
            vector<int>vec;
            int cnt = 0;

            for(int j=i;j<nums.size();j++){
                vec.push_back(nums[j]);
                if(nums[j]%p == 0){
                    cnt++;
                } 
                if(cnt > k) break;
                ans.insert(vec);
            }
            // ans.insert(vec);
        }
        return ans.size();
    }
};