class Solution {
public:
    int change_to_int(string s)
    {
        int end=s.size()-1,x=0;
        int sum=0;
        while(end>=0)
        {
            sum+=(s[end]-'0')*(1 << x);
            x++;
            end--;
        }
        return sum;
    }
    int reverseBits(int n) {
        if(n==0)
        return 0;

        string s;
        for(int i=0;i<32;i++)
        {
            s.push_back(n%2+'0');
            n=n/2;
        }
        return change_to_int(s);
    }
};