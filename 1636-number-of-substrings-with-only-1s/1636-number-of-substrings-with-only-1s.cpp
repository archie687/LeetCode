class Solution {
public:
    int mod = 1e9+7;
    int numSub(string s) {
        int length = 0;
        int sm = 0;

        for(int i=0;i<s.size();i++){

            if(s[i] == '1'){
                length++;
            } 
            else{
                length = 0;
            } 

            sm = (sm + length)%mod;
        }
        return sm;
    }
};