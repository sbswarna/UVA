#include<bits/stdc++.h>
using namespace std;
long long node,edge,i,j,cost[50009],u,v,c,s,e,z,tst;
vector< pair<long long,long long> >vec[50009];
int main()
{
    cin>>tst;
    for(z=1; z<=tst; z++)
    {
        cin>>node>>edge;
        cin>>s>>e;
        for(i=1; i<=edge; i++)
        {
            cin>>u>>v>>c;
            vec[u].push_back(make_pair(v,c));
            vec[v].push_back(make_pair(u,c));
        }
        for(i=0; i<=node; i++)
        {
            cost[i]=-9999999999999999;
        }
        priority_queue< pair<long long,long long> >pq;
        pq= priority_queue< pair<long long,long long> >();
        pq.push(make_pair(0,s));
        cost[s]=0;
        while(!pq.empty())
        {
            long long x=pq.top().second;
            pq.pop();
            for(i=0; i<vec[x].size(); i++)
            {
                long long k=vec[x][i].first;
                long long l=vec[x][i].second;
                if(cost[k]<cost[x]-l)
                {
                    cost[k]=cost[x]-l;
                    pq.push(make_pair((cost[k]),k));
                }
            }
        }
        printf("Case #%lld: ",z);
        if(cost[e]!=-9999999999999999)
            cout<<cost[e]*-1<<endl;
        else
            printf("unreachable\n");
        for(i=0; i<=50000; i++)
            vec[i].clear();
    }
    return 0;
}

