class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        sort(nums.begin(), nums.end());

    vector<int> ans;
    int expected = 1;
    int n = nums.size();

    for (int i = 0; i < n; i++) {
        if (i > 0 && nums[i] == nums[i-1]) 
            continue;

        while (expected < nums[i]) {
            ans.push_back(expected);
            expected++;
        }

        if (nums[i] == expected)
            expected++;
    }
    while (expected <= n) {
        ans.push_back(expected);
        expected++;
    }

    return ans;
    }
};