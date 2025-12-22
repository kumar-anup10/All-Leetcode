class Solution {
public:
    string findans(string s, int k) {
        if (s.size() <= k)
            return s;

        string ans = "";
        int sum = 0, cnt = 0;

        for (int i = 0; i < s.size(); i++) {
            sum += s[i] - '0';
            cnt++;

            if (cnt == k || i == s.size() - 1) {
                ans += to_string(sum);
                sum = 0;
                cnt = 0;
            }
        }

        return findans(ans, k);
    }
    string digitSum(string s, int k) {
        return findans(s,k);
    }
};