// class Solution {
// public:

//     bool solve(string s, string p , int i , int j , vector<vector<int>>& dp){
//         if(i==0 && j==0) return true;
//         if(i>0 && j==0) return  false;

//         if(i==0 && j>0){
//             for(int k=1;k<=j;k++){
//                 if(p[k-1] != '*'){
//                     return false;
//                 } 
//             } 
//             return true;
//         } 

//         if(dp[i][j] != -1) return dp[i][j];

//         if(s[i-1] == p[j-1] || p[j-1] == '?')
//             return dp[i][j] = solve(s , p , i-1 , j-1 , dp);
        

//         else if(p[j-1] == '*')
//         {return dp[i][j] = (solve(s , p , i-1 , j , dp) || solve(s , p , i , j-1 , dp));}
//         return false;
//     }

//     bool isMatch(string s, string p) {
//         vector<vector<int>> dp(s.length()+1 , vector<int>(p.length()+1 , -1));
//         return solve(s , p , s.length() , p.length() , dp);
//     }
// };



class Solution {
public:

    bool solve(string &s,string &p,int i,int j,vector<vector<int>> &dp){

        if(i<0 && j<0){
            return 1;
        }

        if(i>=0  && j<0) return 0;
     
        
        if(i<0 && j>=0) {
            while(j>=0) {
                if(p[j]!='*') return 0;
                j--;
            }
            return 1;
        };
        if(dp[i][j]!=-1) return dp[i][j];
        if(p[j]==s[i] || p[j]=='?'){
           return dp[i][j]=solve(s,p,i-1,j-1,dp);

        }



        if(p[j]=='*'){
            int t=solve(s,p,i-1,j,dp);
            
            int neglect=solve(s,p,i,j-1,dp);
            return dp[i][j]=t||neglect;
        }
        return dp[i][j]=0;
    }
    bool isMatch(string &s, string &p) {
     
        int n=s.size();
        int m=p.size();
       

        vector<vector<int>> dp(n,vector<int>(m,-1));
       
        return solve(s,p,n-1,m-1,dp);
    }
};