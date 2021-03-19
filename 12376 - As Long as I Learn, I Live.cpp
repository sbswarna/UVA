#include<bits/stdc++.h>
using namespace std;
long long n,e,cost[102],tst,u,v;
vector<pair<long long,long long> >graph[102];
int main()
{
    cin>>tst;
    int k=1;
    while(tst--)
    {
        cin>>n>>e;
        for(int i=0; i<n; i++)
        {
            cin>>cost[i];
        }
        for(int i=0; i<e; i++)
        {
            cin>>u>>v;
            graph[u].push_back(make_pair(cost[v]*-1,v));
        }
        for(int i=0;i<n;i++)
            sort(graph[i].begin(),graph[i].end());
//            for(int i=0;i<n;i++)
//            {
//                for(int j=0;j<graph[i].size();j++)
//                {
//                    cout<<i<<" "<<graph[i][j].second<<" "<<graph[i][j].first*-1<<endl;
//                }
//            }
        long long mx=-1,st=0,s=0;
        while(graph[st].size()!=0)
        {
            s=s+graph[st][0].first*-1;
            st=graph[st][0].second;
        }
        cout<<"Case "<<k<<": ";
        cout<<s<<" "<<st<<endl;
        k++;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
                graph[i].clear();
        }
        memset(cost,0,sizeof(cost));
    }
    return 0;
}
