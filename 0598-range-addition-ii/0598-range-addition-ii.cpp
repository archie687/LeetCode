class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        
        for(int i=0;i<ops.size();i++){
            n = min(n , ops[i][1]);
            m = min(m , ops[i][0]);
        }
        return m*n;
    }
};