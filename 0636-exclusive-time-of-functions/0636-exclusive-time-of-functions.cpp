class Solution {
public:
    vector<int> exclusiveTime(int n, vector<string>& logs) {
        vector<int>count(n,0);
        int prev=0;
        stack<pair<int,int>>s;
        for(auto & l:logs)
        {
            int id=stoi(l.substr(0,l.find(':')));
            int time=stoi(l.substr(l.rfind(':')+1));
            if(l.find('e')!=-1)
            {
                count[id]+=time-prev+1;
                s.pop();
                prev=time+1;
            }
            else
            {
                if(!s.empty())
                count[s.top().first]+=(time-prev);
                s.push({id,time});
                prev=time;
            }
        }
    return count;
    }
};