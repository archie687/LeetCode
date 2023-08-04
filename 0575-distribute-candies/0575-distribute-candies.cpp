class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        set<int>s(candyType.begin() , candyType.end());

        int n = candyType.size()/2;

        if(s.size() <= n) return s.size();
        // else if(s.size() > n)
         return n;
    }
};