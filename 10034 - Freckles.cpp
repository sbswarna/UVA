#include<bits/stdc++.h>
using namespace std;
long long i,j,k,n,tst,c;
double x,y,t;
pair<double,pair<long long,long long> >p[10000];
map<pair<double,double>,long long>mp;
pair<double,double>p1[10000];
long long parent[200];
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
    while(tst--)
    {
        cin>>n;
        for(i=1; i<=n; i++)
        {
            cin>>x>>y;
            p1[i].first=x;
            p1[i].second=y;
        }
        for(i=1; i<=n; i++)
        {
            mp[p1[i]]=i;
        }
//        for(i=1; i<=n; i++)
//            cout<<mp[p1[i]]<<endl;
        k=0;
        for(i=1; i<=n; i++)
        {
            for(j=i+1; j<=n; j++)
            {
                double t1=(p1[i].first-p1[j].first);
                t1=t1*t1;
                //printf("%.2lf\n",t1);
                double t2=(p1[i].second-p1[j].second);
                t2=t2*t2;
                //printf("%.2lf\n",t2);
                double t=pow((t1+t2),0.5);
               // printf("%.2lf\n",t);
                p[k].first=t;
                p[k].second.first=mp[p1[i]];
                p[k].second.second=mp[p1[j]];
                k++;
            }
        }
        //cout<<k<<endl;
        sort(p,p+k);
//        for(i=0; i<k; i++)
//            cout<<p[i].first<<" "<<p[i].second.first<<" "<<p[i].second.second<<endl;
       for(i=1;i<=n;i++)
        parent[i]=i;
        double cost=0;
       for(i=0;i<k;i++)
       {
           long long bx=p[i].second.first;
           long long by=p[i].second.second;
           long long x1=boss(bx);
           long long y1=boss(by);
           if(x1!=y1)
           {
               parent[x1]=y1;
               cost=cost+p[i].first;
           }
       }
       printf("%.2lf\n",cost);
       if(tst)
       cout<<endl;
       mp.clear();

    }
    return 0;
}
