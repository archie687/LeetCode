class Solution {
public:

    void solve(vector<vector<int>>& v , vector<int>& vec , vector<int>& candidates , int target , int i){
        if(i == candidates.size() ){
            if(target == 0){
            v.push_back(vec);
            }
            return;
        } 

        if(candidates[i] <= target){
            vec.push_back(candidates[i]);
            solve(v , vec , candidates , target-candidates[i] , i);
            vec.pop_back();
        } 

        solve(v , vec , candidates , target , i+1);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>v;
        vector<int>vec;

        solve(v , vec , candidates , target , 0);

        return v;
    }
};