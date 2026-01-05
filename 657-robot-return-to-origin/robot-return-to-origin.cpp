class Solution {
public:
    bool judgeCircle(string moves) {
        int vertical=0,hori=0;
        for(int i=0;i<moves.size();i++)
        {
            if(moves[i]=='U')
            vertical++;
            else if(moves[i]=='D')
            vertical--;
            else if(moves[i]=='R')
            hori++;
            else
            hori--;
        }
        return (hori==0 && vertical==0);
    }
};