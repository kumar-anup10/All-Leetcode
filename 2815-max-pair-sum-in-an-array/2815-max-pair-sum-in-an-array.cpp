class Solution {
public:
    int maxSum(vector<int>& nums) {
        vector<int> best(10, -1);
        int ans = -1;

        for (int num : nums) {
            int x = num, d = 0;
            while (x > 0) {
                d = max(d, x % 10);
                x /= 10;
            }
            if (best[d] != -1)
                ans = max(ans, best[d] + num);
            best[d] = max(best[d], num);
        }
        return ans;
    }
};