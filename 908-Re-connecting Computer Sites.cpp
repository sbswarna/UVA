#include<bits/stdc++.h>
using namespace std;
priority_queue<pair<long long,long long> >pq;
vector<pair<long long,long long> >graph[1000002];
long long n,e,s,u,v,c,parent[1000002],visited[1000002],cost[1000002],x,x1,y11;
long long prims(long long s,vector<pair<long long,long long> >graph[])
{
    for(int i=1; i<=n; i++)
    {
        cost[i]=999999999;
        visited[i]=0;
    }
    pq.push(make_pair(0,s));
    cost[s]=0;
    c=0;
    long long sum=0;
    while(!pq.empty())
    {
        x=pq.top().second;
        pq.pop();
        visited[x]=1;
        for(int i=0; i<graph[x].size(); i++)
        {
            x1=graph[x][i].second;
            y11=graph[x][i].first;
            if(visited[x1]==0&&y11<cost[x1])
            {
                cost[x1] = y11;
                pq.push(make_pair(y11*-1,x1));
                parent[x1]=x;
            }
        }
    }
    for(int i=1; i<=n; i++)
        sum=sum+cost[i];
    return sum;
}
int main()
{
    int t=0;
    while(cin>>n)
    {
        for(int i=0;i<=n;i++)
            graph[i].clear();
        int ans=0;
        for(int i = 1; i < n; i++)
        {
            cin>>u>>v>>c;
            ans+=c;
        }
        if(t)
            cout<<endl;
        t++;
        //cout<<ans<<endl;
        cin>>e;
        for(int i=1; i<=e; i++)
        {
            cin>>u>>v>>c;
            graph[u].push_back(make_pair(c,v));
            graph[v].push_back(make_pair(c,u));
        }
        cin>>e;
        for(int i=1; i<=e; i++)
        {
            cin>>u>>v>>c;
            graph[u].push_back(make_pair(c,v));
            graph[v].push_back(make_pair(c,u));
        }
        cout<<ans<<endl<<prims(1,graph)<<endl;
    }
    return 0;
}
