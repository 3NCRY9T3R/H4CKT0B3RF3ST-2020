bool check(int i,unordered_map<int,vector<int>> &g,bool visited[])
{
    visited[i]=true;
    for(auto it:g[i])
    {
        if(visited[it]==true)
        return true;
        if(check(it,g,visited))
        return true;
    }
    visited[i]=false;
    return false;
}
int Solution::solve(int A, vector<vector<int> > &B) {
    unordered_map<int,vector<int>>g;
    int i;
   // memset(g,0,sizeof(g));
    for(i=0;i<B.size();i++)
    {
        g[B[i][0]].push_back(B[i][1]);
    }
    bool visited[A];
    memset(visited,0,sizeof(visited));
    for(i=0;i<A;i++)
    {
        if(check(i,g,visited))
        return 1;
        
    }
    return 0;
}
