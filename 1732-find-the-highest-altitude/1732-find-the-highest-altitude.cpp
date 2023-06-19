class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans = INT_MIN;
        int prev = 0;

        for(int i=0;i<gain.size();i++){
            ans = max(ans , prev);
            prev += gain[i];
        } 

        if(prev > ans) {
            ans = prev;
        }
        return ans;
    }
};