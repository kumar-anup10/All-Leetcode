class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int ans = 0;
        int rows = strs.size();
        int cols = strs[0].size();

        for (int i = 0; i < cols; i++) {
            string temp = "";
            for (int j = 0; j < rows; j++) {
                temp.push_back(strs[j][i]);
            }

            string s = temp;
            sort(temp.begin(), temp.end());
            if (s != temp)
                ans++;
        }
        return ans;
    }
};