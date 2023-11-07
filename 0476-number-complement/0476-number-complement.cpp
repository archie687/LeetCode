class Solution {
public:
    int findComplement(int num) {
        string str = "";
        while(num){
            int rem = num%2;
            str = to_string(rem) + str;
            // str += to_string(rem);
            num /= 2;
        } 

        for(int i=0;i<str.size();i++){
            if(str[i] == '0'){
                str[i] = '1';
            }
            else {
                str[i] = '0';
            }
        } 
        // int ans = stoi(str);
        // return ans;

        int ans = 0;
        long long int base = 1;
        for(int i=str.size()-1;i>=0;i--){
            if(str[i] == '1'){
                ans += base;
            }
            
            base *= 2;
        }
        return ans;
    }
};