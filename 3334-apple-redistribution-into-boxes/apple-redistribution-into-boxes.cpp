class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin(),capacity.end());
        int t_apple=0;
        for(int i=0;i<apple.size();i++)
        {
            t_apple+=apple[i];
        }
        int ans=0;
        for(int i=capacity.size()-1;i>=0;i--)
        {
            t_apple-=capacity[i];
            ans++;
            if(t_apple<=0)
            break;
        }
        return ans;
    }
};