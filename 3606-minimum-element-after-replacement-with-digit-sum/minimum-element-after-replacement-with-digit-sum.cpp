class Solution {
public:
    int minElement(vector<int>& nums) {
        int mini=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            int temp=nums[i],sum=0;
            while(temp)
            {
                sum+=temp%10;
                temp/=10;
            }
            mini=min(mini,sum);
        }
        return mini;
    }
};