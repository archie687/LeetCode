class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int ans = 0;

        sort(prices.begin() , prices.end());

       ans = prices[0]+prices[1];
       if(ans <= money){
           return money-ans;
       } 
       return money;
    }
};