class Solution {
public:

    int solve(string answerKey, int k , char ch){

        int left = 0 , right = 0 , ans = 0 , cnt = 0 , n = answerKey.size();

        while(right < n){
            if(answerKey[right] == ch)
                cnt++;
            while(left<n && cnt > k){
                if(ch == answerKey[left])
                cnt--;
                left++;
            } 

            ans = max(right-left+1 , ans);
            right++;
        } 
        return ans;
    }

    int maxConsecutiveAnswers(string answerKey, int k) {
        int ans1 = solve(answerKey , k , 'T');
        int ans2 = solve(answerKey , k , 'F');

        return max(ans1 , ans2);
    }
};