class Solution {
public:
    bool isSorted(vector<int>& nums){
        for(int i=1;i<nums.size();i++){
            if(nums[i] < nums[i-1])
                return false;
        }
        return true;
    }
    int minimumPairRemoval(vector<int>& nums) {
        int cnt = 0;

        while(!isSorted(nums)){
            int idx = 0;
            int mn = INT_MAX;

            for(int i=0;i+1<nums.size();i++){
                int s = nums[i] + nums[i+1];
                if(s < mn){
                    mn = s;
                    idx = i;
                }
            }

            nums[idx] = mn;
            nums.erase(nums.begin() + idx + 1);
            cnt++;
        }

        return cnt;
    }
};