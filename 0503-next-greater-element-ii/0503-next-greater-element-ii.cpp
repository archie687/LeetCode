class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>v;
        vector<int>temp = nums;

        for(int i=0;i<nums.size();i++){
            temp.push_back(nums[i]);
        } 

        for(int i=0;i<nums.size();i++){
            int x = temp[i];
            int j = i+1;

            while(j < temp.size()){
                if(x < temp[j]){
                    x = temp[j];
                    break;
                } 
                j++;
            }

            if(x != temp[i]) v.push_back(x);
            else v.push_back(-1);
        } 

        return v;


    }
};