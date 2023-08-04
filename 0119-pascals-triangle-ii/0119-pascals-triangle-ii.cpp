class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
        vector<vector<int>>vec;

        for(int i=0;i<=rowIndex;i++){
            // vec[i].resize(i+1 , 1);
            vec.push_back(vector<int>(i+1 , 1));

            for(int j=1;j<i;j++){
                vec[i][j] = vec[i-1][j-1]+vec[i-1][j];
            } 
        } 
        return vec[rowIndex];
    }
};