#include<bits/stdc++.h>
using namespace std;
long long i,j,m,n,tst,parent[109];
pair<long long,pair<long long,long long> >p[10000],p1[10000];
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
    cin>>tst;
    long long k=1;
    while(k<=tst)
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
        vector<long long>v[104];
        long long visited[102];
        memset(visited,-1,sizeof(visited));
        for(i=0; i<104; i++)
        {
            v[i].clear();
        }
        long long cost=0,d=0;
        for(i=0; i<m; i++)
        {
            long long x,y,bx,by;
            x=p[i].second.first;
            y=p[i].second.second;
            bx=boss(x);
            by=boss(y);
            if(bx!=by)
            {
                parent[bx]=parent[by];
                cost=cost+p[i].first;
                p1[d].second.first=x;
                p1[d].second.second=y;
                p1[d].first=p[i].first;
                d++;
                v[x].push_back(y);
                v[y].push_back(x);
            }
        }
        queue<long long>q;
        q.push(1);
        visited[1]=0;
        while(!q.empty())
        {
            long long l=q.front();
            q.pop();
            for(i=0; i<v[l].size(); i++)
            {
                if(visited[v[l][i]]==-1)
                {
                    q.push(v[l][i]);
                    visited[v[l][i]]=visited[l]+1;
                }
            }
        }
        long long f=0;
        for(i=1; i<=n; i++)
        {
            if(visited[i]==-1)
            {
                f=1;
                break;
            }
        }
        //cout<<f<<endl;
        printf("Case #%lld : ",k);
        if(f==1)
        {
            cout<<"No way"<<endl;
        }
        else
        {
            sort(p1,p1+d);
            long long s=cost;
            long long mn=999999999999999;
            for(j=d-1; j>=0; j--)
            {
                for(i=0; i<=n; i++)
                    parent[i]=i;
                cost=0;
                for(i=0; i<m; i++)
                {
                    if(p[i].second.first!=p1[j].second.first||p[i].second.second!=p1[j].second.second)
                    {
                        long long x,y,bx,by;
                        x=p[i].second.first;
                        y=p[i].second.second;
                        bx=boss(x);
                        by=boss(y);
                        if(bx!=by)
                        {
                            parent[by]=parent[bx];
                            cost=cost+p[i].first;
                        }
                    }
                    else
                    {
                        p1[j].second.first=-1;
                        p1[j].second.second=-1;
                    }
                }
                if(cost>=s)
                {
                    mn=min(mn,cost);
                }
            }
            if(mn==999999999999999)
            {
                cout<<"No second way"<<endl;
            }
            else
            {
                cout<<mn<<endl;
            }
        }
        k++;
    }
    return 0;
}
