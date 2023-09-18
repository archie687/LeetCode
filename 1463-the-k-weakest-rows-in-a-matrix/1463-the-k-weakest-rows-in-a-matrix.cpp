class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        // pair<int , int>p;
        // vector<int>v;
        // vector<vector<int>>p;
        vector<pair<int , int>>p;

        for(int i=0;i<mat.size();i++){
            int cnt = 0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j] == 1)cnt++;
            }
            p.push_back({cnt , i});
        } 
        vector<int>v;
        int i =0;
        sort(p.begin() , p.end());
        while(k--){
            v.push_back(p[i].second);
            i++;
        } 
        return v;
    }
};