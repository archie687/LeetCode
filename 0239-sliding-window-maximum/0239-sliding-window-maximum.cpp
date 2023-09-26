class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>dq;
        vector<int>v;

        for(int i=0;i<nums.size();i++){

            while(!dq.empty() && nums[i] > dq.front()){
                dq.pop_front();
            } 
            dq.push_front(nums[i]);

            if(i >= k-1){
                v.push_back(dq.back());
                if(dq.back() == nums[i-k+1]) dq.pop_back();
            }
        } 
        return v;
    }
};