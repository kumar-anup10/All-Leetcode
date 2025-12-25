class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long ans=0;
        sort(happiness.begin(),happiness.end());
        int turn=0,start=happiness.size()-1;
        while(k>0 && start>=0)
        {
            int temp=happiness[start]-turn;
            if(temp>0)
            ans+=temp;
            else 
            break;
            start--;
            turn++;
            k--;
        }
        return ans;
    }
};