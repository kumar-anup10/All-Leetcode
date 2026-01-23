class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        // if you reverse the array one by one 

        // while(k--)
        // {
        //     reverse(nums.begin(),nums.end()-1);
        //     reverse(nums.begin(),nums.end());
        // }


        // one step code to reverse
        int n=nums.size();
        k = k%n;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
};