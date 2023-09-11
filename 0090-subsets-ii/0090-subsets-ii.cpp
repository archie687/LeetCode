class Solution {
public:

    void subset(set<vector<int>>& s, vector<int>& nums , int i , vector<int> vec){
        if(i >= nums.size()){
            s.insert(vec);
            return;
        } 

        subset(s , nums , i+1 , vec);
        int element = nums[i];
        vec.push_back(element);
        subset(s , nums , i+1 , vec);

    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>v;
        vector<int>vec;
        set<vector<int>>s;

        sort(nums.begin() , nums.end());
        
        subset(s , nums , 0 , vec);
        for(auto i:s){
            v.push_back(i);
        }
        return v;
    }
};