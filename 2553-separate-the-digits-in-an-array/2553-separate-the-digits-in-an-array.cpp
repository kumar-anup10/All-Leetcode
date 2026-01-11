class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        stack<int>s;
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            while(nums[i])
            {
                s.push(nums[i]%10);
                nums[i]/=10;
            }
            while(!s.empty())
            {
                ans.push_back(s.top());
                s.pop();
            }
        }
        return ans;
    }
};