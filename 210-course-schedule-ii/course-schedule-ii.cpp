class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        int p=prerequisites.size(),n=numCourses;
        vector<int>indeg(n,0);
        vector<vector<int>>adj(n);
        
        for(int i=0;i<p;i++)
        {
            indeg[prerequisites[i][0]]++;
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        
        // now push into queue 
        queue<int>q;
        
        for(int i=0;i<n;i++)
        if(!indeg[i])
        q.push(i);
        vector<int>ans;
        
        int count=0;
        while(!q.empty())
        {
            int node=q.front();
            q.pop();
            ans.push_back(node);
            count++;
            for(int j=0;j<adj[node].size();j++)
            {
                int neighbor = adj[node][j];
                indeg[neighbor]--;
            
                if(indeg[neighbor] == 0)
                    q.push(neighbor);
            }
        }
        return count==n? ans:vector<int>{};
    }
};