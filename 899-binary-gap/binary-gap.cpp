class Solution {
public:
    int binaryGap(int n) {
        int prev = -1;
        int ans = 0;
        
        for(int i = 0; n > 0; i++)
        {
            if(n & 1)
            {
                if(prev != -1)
                    ans = max(ans, i - prev);
                
                prev = i;
            }
            
            n >>= 1;
        }
        
        return ans;
    }
};