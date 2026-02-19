class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        unordered_map<int,int> freq;
        vector<int> ans;

        for(int x : bulbs)
            freq[x]++;

        for(auto &p : freq)
        {
            if(p.second % 2 == 1)
                ans.push_back(p.first);
        }
         sort(ans.begin(), ans.end());
        return ans;
    }
};