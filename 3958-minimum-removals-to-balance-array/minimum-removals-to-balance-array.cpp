class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        if(nums.size()==1 || nums.size()==0)
        return 0;
        sort(nums.begin(),nums.end());
        int maxLen = 1;
        int l = 0;

        for (int r = 0; r < nums.size(); r++) {
            while (nums[r] > (long long)nums[l] * k) {
                l++;
            }
            maxLen = max(maxLen, r - l + 1);
        }

        return nums.size() - maxLen;
    }
};