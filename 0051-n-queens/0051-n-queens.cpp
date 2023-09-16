class Solution {
public:

    void helper(int col , vector<string>& v , vector<vector<string>>& vec , vector<int>& leftrow , vector<int>& upperdiag , vector<int>& lowerdiag , int n){
        if(col == n){
            vec.push_back(v);
            return;
        } 

        for(int i=0;i<n;i++){
            if(leftrow[i] == 0 && upperdiag[n-1+col-i] == 0 && lowerdiag[col+i] == 0){
                v[i][col] = 'Q';
                leftrow[i] = 1;
                upperdiag[n-1+col-i] = 1;
                lowerdiag[i+col] = 1; 

                helper(col+1 , v , vec , leftrow , upperdiag , lowerdiag , n);

                v[i][col] = '.';
                leftrow[i] = 0;
                upperdiag[n-1+col-i] = 0;
                lowerdiag[i+col] = 0;
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>vec;
        vector<string>v(n);
        string s(n , '.');

        for(int i=0;i<n;i++){
            v[i] = s;
        } 

        vector<int> leftrow(n , 0) , upperdiag(2*n-1 , 0) , lowerdiag(2*n-1 , 0);
        helper(0 , v , vec , leftrow , upperdiag , lowerdiag , n);
        return  vec;
    }
};