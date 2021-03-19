#include<bits/stdc++.h>
using namespace std;
pair<int,int>graph[3006];
int nodes,edges,tst,cost[1006],dis[1005][1005],u,v,c;
int bellman_ford()
{
    for(int i=0; i<=nodes; i++)
        cost[i]=9999999;
    int neg;
    cost[0]=0;
    for(int i=1; i<nodes; i++)
    {
        for(int j=0; j<edges; j++)
        {
            if(cost[graph[j].second]>cost[graph[j].first]+dis[graph[j].first][graph[j].second])
            {
                cost[graph[j].second]=cost[graph[j].first]+dis[graph[j].first][graph[j].second];
            }
        }
    }
    neg=0;
    for(int j=0; j<edges; j++)
    {
        if(cost[graph[j].second]>cost[graph[j].first]+dis[graph[j].first][graph[j].second])
        {
            cost[graph[j].second]=cost[graph[j].first]+dis[graph[j].first][graph[j].second];
            neg=1;
        }
    }
    return neg;
}
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>nodes>>edges;
        for(int i=0; i<edges; i++)
        {
            cin>>u>>v>>c;
            graph[i].first=u;
            graph[i].second=v;
            dis[u][v]=c;
        }
        int ans=bellman_ford();
        if(ans==1)
            cout<<"possible"<<endl;
        else
            cout<<"not possible"<<endl;
    }
    return 0;
}

