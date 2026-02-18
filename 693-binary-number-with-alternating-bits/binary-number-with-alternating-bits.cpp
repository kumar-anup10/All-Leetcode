class Solution {
public:
    bool hasAlternatingBits(int n) {
        stack<int>s;
        while(n)
        {
            s.push(n%2);
            n/=2;
        }
        int prev=s.top();
        s.pop();
        while(!s.empty())
        {
            if(s.top()==prev)
            return false;
            prev=s.top();
            s.pop();
        }
        return true;
    }
};