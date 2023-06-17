class Solution {
public:
    string convert(string s, int numRows) {
     if(numRows == 1 || numRows == s.size()) return s;
     int jump = (numRows - 1)*2;
     string str = "";
     for(int i=0;i<numRows;i++){
         int j = i;
         while(j<s.length()){
         if(i == 0 || i == numRows-1){
             str += s[j];
             j += jump;
         } 
         else{
             int smalljump = jump-(i*2);
             str += s[j];
             if(j+smalljump < s.size()){
                 str += s[j+smalljump];
             }
             j+=jump;
            }
         }
     }
     return str;
    }
};