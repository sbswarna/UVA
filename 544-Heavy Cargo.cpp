#include<bits/stdc++.h>
using namespace std;
long long n,e,i,cst,j,k,c,tst=1,cost[205][205];
string s1,s2;
map<string,long long>mp;
map<long long,string>mp1;
long long graph[205][205];
int main()
{
    while(scanf("%lld%lld",&n,&e)==2)
    {
        if(n==0&&e==0)
            break;
        else
        {
            mp.clear();
            for(i=0; i<=200; i++)
            {
                for(int j=0; j<=200; j++)
                {
                    graph[i][j]=999999999999;
                    cost[i][j]=0;
                }
            }
            c=0;
            for(i=1; i<=e; i++)
            {
                cin>>s1>>s2>>cst;
                if(mp.find(s1)==mp.end())
                {
                    mp[s1]=c;
                    c++;
                }
                if(mp.find(s2)==mp.end())
                {
                    mp[s2]=c;
                    c++;
                }
                if(cst<graph[mp[s1]][mp[s2]])
                {
                    graph[mp[s1]][mp[s2]]=cst;
                    graph[mp[s2]][mp[s1]]=cst;
                    cost[mp[s1]][mp[s2]]=cst;
                    cost[mp[s2]][mp[s1]]=cst;
                }
            }
            cin>>s1>>s2;
            if(mp.find(s1)==mp.end())
            {
                mp[s1]=c;
                c++;
            }
            if(mp.find(s2)==mp.end())
            {
                mp[s2]=c;
                c++;
            }
            for(k=0; k<n; k++)
            {
                for(i=0; i<n; i++)
                {
                    for(j=0; j<n; j++)
                    {
                        cost[i][j]=max(cost[i][j],min(cost[i][k],cost[k][j]));
                    }
                }
            }
            printf("Scenario #%lld\n",tst);
            cout<<cost[mp[s1]][mp[s2]]<<" tons"<<endl<<endl;
            tst++;
        }
    }
    return 0;
}
