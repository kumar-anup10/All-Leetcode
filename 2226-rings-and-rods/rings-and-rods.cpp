class Solution {
public:
    int countPoints(string rings) {
        vector<set<char>> col(10);

        for(int i = 0; i < rings.size(); i += 2) {
            col[rings[i+1] - '0'].insert(rings[i]);
        }

        int count = 0;

        for(int i = 0; i < 10; i++) {
            if(col[i].size() == 3) count++;
        }

        return count;
        // return count!=0? count:0;
    }
};