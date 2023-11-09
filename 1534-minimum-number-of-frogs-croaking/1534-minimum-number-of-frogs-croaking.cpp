class Solution {
public:
    int minNumberOfFrogs(string croakOfFrogs) {
        int cnt[5] = {};
        int frogs = 0 , mx_frogs = 0;

        for(auto ch:croakOfFrogs){
            int n = string("croak").find(ch);
            cnt[n]++;

            if(n == 0){
                mx_frogs = max(mx_frogs , ++frogs);
            } 
            else if(--cnt[n-1] < 0){
                return -1;
            } 
            else if(n == 4){
                --frogs;
            }
        }
        return (frogs == 0)? mx_frogs:-1;
    }
};