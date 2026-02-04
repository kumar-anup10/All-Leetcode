class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> sorted = nums;
    sort(sorted.begin(), sorted.end());

    unordered_map<int, int> count;
    for (int i = 0; i < sorted.size(); i++) {
        if (count.find(sorted[i]) == count.end()) {
            count[sorted[i]] = i;
        }
    }
    vector<int> ans;
    for (int x : nums) {
        ans.push_back(count[x]);
    }

    return ans;
    }
};