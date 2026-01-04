class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            int temp=0,count=0;
            bool check=false;
            for(int j=1;j<=nums[i];j++)
            {
                if(nums[i]%j==0)
                {
                    temp+=j;
                    count++;
                }
                if(count>4)
                {
                    check=true;
                    break;
                }
            }
            if(count==4 && !check)
            ans+=temp;
        }
        return ans;
    }
};