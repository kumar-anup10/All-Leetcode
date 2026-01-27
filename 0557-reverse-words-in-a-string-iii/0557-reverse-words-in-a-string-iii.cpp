class Solution {
public:
    string reverseWords(string s) {
        int left=0,right=0,start=0;
        while(right<s.size())
        {
            while(s[right]!=' ' && right<s.size())
            right++;
            reverse(s.begin()+left,s.begin()+right);
            left=right+1;
            right++;
        }
    return s;
    }
};