class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int>even;
        vector<int>odd;
        vector<int>v;

        for(int i=0;i<nums.size();i++){
            if(nums[i]%2 == 0){
                even.push_back(nums[i]);
            } 
            else{
                odd.push_back(nums[i]);
            } 
        } 

        int e = 0 , o = 0;

        for(int i=0;i<nums.size();i++){
            if(i%2 == 0){
                v.push_back(even[e]);
                e++;
            } 
            else{
                v.push_back(odd[o]);
                o++;
            } 
        }
return v;
    }
};