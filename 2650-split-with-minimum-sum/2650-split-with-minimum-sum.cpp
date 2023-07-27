class Solution {
public:
    int splitNum(int num) {
        int num1 = 0 , num2 = 0 , x = 1;
        vector<int>v;
        while(num){
            v.push_back(num%10);
            num /= 10;
        } 
         num = 0;
        sort(v.begin() , v.end());
        for(int i=0;i<v.size();i++){
            num *= 10;
            num += v[i];
        }

        while(num){
            num1 += x*(num%10);
            num /= 10;
            num2 += x*(num%10);
            num /= 10;
            x *= 10;
        }
        return num1+num2;
    }
};