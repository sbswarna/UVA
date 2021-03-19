#include<bits/stdc++.h>
using namespace std;
long long i,j,m,n,tst,parent[109];
pair<long long,pair<long long,long long> >p[10000],p1[10000];
long long b(long long u)
{
    if(parent[u]!=u)
    {
        parent[u]=b(parent[u]);
    }
    return parent[u];
}
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>n>>m;
        for(i=0; i<m; i++)
        {
            cin>>p[i].second.first>>p[i].second.second>>p[i].first;
        }
        sort(p,p+m);
        for(i=0; i<=n; i++)
        {
            parent[i]=i;
        }
        long long cost=0,d=0;
        for(i=0; i<m; i++)
        {
            long long x,y,bx,by;
            x=p[i].second.first;
            y=p[i].second.second;
            bx=b(x);
            by=b(y);
            if(bx!=by)
            {
                parent[bx]=parent[by];
                cost=cost+p[i].first;
                p1[d].second.first=x;
                p1[d].second.second=y;
                p1[d].first=p[i].first;
                d++;
            }
        }
        sort(p1,p1+d);
        long long s=cost;
        long long mn=999999999999999;
        for(j=d-1; j>=0; j--)
        {
            for(i=0;i<=n;i++)
                parent[i]=i;
            cost=0;

            for(i=0; i<m; i++)
            {
                if(p[i].second.first!=p1[j].second.first||p[i].second.second!=p1[j].second.second)
                {
                    long long x,y,bx,by;
                    x=p[i].second.first;
                    y=p[i].second.second;
                    bx=b(x);
                    by=b(y);
                    if(bx!=by)
                    {
                        parent[by]=parent[bx];
                        cost=cost+p[i].first;

                    }
                }
            }
                if(cost>=s)
                {
                    mn=min(mn,cost);
                }
        }
        cout<<s<<" "<<mn<<endl;
    }
    return 0;
}
