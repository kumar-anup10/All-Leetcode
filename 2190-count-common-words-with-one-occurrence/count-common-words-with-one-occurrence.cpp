class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int>m,n;
        for(auto &ch:words1)
        m[ch]++;
        for(auto &ch:words2)
        n[ch]++;
        int ans = 0;

        for (auto &p : m) {
            if (p.second == 1 && n[p.first] == 1)
                ans++;
        }

        return ans;
    }
};