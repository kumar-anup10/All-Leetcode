class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int digisum=0,elesum=0;
        for(int i=0;i<nums.size();i++)
        {
            elesum+=nums[i];
            while(nums[i])
            {
                digisum+=nums[i]%10;
                nums[i]/=10;
            }
        }
        return abs(elesum-digisum);
    }
};