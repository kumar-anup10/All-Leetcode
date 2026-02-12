class Solution {
public:
    int longestBalanced(string s) {
       int n = s.size();
        int ans = 0;

        for(int i = 0; i < n; i++) {
            vector<int> count(26, 0);
            int distinct = 0;
            int maxFreq = 0;

            for(int j = i; j < n; j++) {
                int idx = s[j] - 'a';

                if(count[idx] == 0)
                    distinct++;

                count[idx]++;
                maxFreq = max(maxFreq, count[idx]);

                int length = j - i + 1;

                // Balanced condition
                if(length == distinct * maxFreq) {
                    ans = max(ans, length);
                }
            }
        }

        return ans;
    }
};