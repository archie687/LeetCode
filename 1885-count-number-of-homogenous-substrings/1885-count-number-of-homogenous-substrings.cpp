class Solution {
public:
    int mod = 1e9+7;
    int countHomogenous(string s) {
        int length = 0;
        int sm = 0;

        for(int i=0;i<s.size();i++){
            
                if(i > 0 && s[i] == s[i-1]){
                    length++;
                    // sm += length;
                } 
                else{
                    length = 1;
                    // sm += length;
                }
                sm = (sm + length)%mod;
            
        }
        return sm;
    }
};