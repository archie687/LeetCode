class Solution {
public: 
 
    vector<int> nextSmaller(vector<int>& heights , int n){
        stack<int>s;
        vector<int>ans(n);

        s.push(-1);

        for(int i=n-1;i>=0;i--){
            int curr = heights[i];

            while(s.top() != -1 && heights[s.top()] >= curr){
                s.pop();
            } 
            ans[i] = s.top();
            s.push(i);
        } 
        return ans;
    }
    vector<int> prevSmaller(vector<int>& heights , int n){
        stack<int>s;
        vector<int>ans(n);

        s.push(-1);

        for(int i=0;i<n;i++){
            int curr = heights[i];

            while(s.top() != -1 && heights[s.top()] >= curr){
                s.pop();
            } 
            ans[i] = s.top();
            s.push(i);
        } 
        return ans;
    }

    int largestRectangleArea(vector<int>& heights) {
        vector<int>next(heights.size());
        vector<int>prev(heights.size());

        next = nextSmaller(heights , heights.size());
        prev = prevSmaller(heights , heights.size());

        int area = INT_MIN;
        for(int i=0;i<heights.size();i++){
            int l = heights[i];

            if(next[i] == -1) {next[i] = heights.size();}

            int b = next[i]-prev[i]-1;
            // int mx = l*b;
            area = max(area , l*b);
        } 
        return area;
    }
};