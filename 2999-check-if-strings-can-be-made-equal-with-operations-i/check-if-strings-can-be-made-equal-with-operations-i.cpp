class Solution {
public:
    bool canBeEqual(string s1, string s2) {
        if(s1.size()!=s2.size())
        return false;
        int i=0,j;
        for(int i=0;i<s1.size();i++)
        {
            if((i+2<s2.size()) && (s1[i]!=s2[i]) && (s1[i]==s2[i+2]))
                swap(s2[i],s2[i+2]);
        }
        return s1==s2;
    }
};