#include<bits/stdc++.h>
using namespace std;
long long i,m,n,parent[200004];
priority_queue<pair<long long,pair<long long,long long> > >pq;
long long boss(long long u)
{
    if(parent[u]!=u)
    {
        parent[u]=boss(parent[u]);
    }
    return parent[u];
}
int main()
{
    while(cin>>m>>n)
    {
        if(m==0||n==0)
        {
            break;
        }
        else
        {
            long long cost=0,a,b,c;
            pq=priority_queue<pair<long long,pair<long long,long long> > >();
            for(i=1;i<=n;i++)
            {
                cin>>a>>b>>c;
                pq.push(make_pair(c*-1,make_pair(a,b)));
                cost=cost+c;
            }
            for(i=0;i<=m;i++)
            {
                parent[i]=i;
            }
            long long mstc=0;
            while(!pq.empty())
            {
                long long x,y,bx,by;
                x=pq.top().second.first;
                y=pq.top().second.second;
                bx=boss(x);
                by=boss(y);
                if(bx!=by)
                {
                    parent[bx]=parent[by];
                    mstc=mstc+(pq.top().first*-1);
                }
                pq.pop();
            }
            //cout<<cost<<" "<<mstc<<endl;
            cout<<cost-mstc<<endl;
        }
    }
    return 0;
}
