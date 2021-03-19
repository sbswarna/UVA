#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tst=1;
    int n,r;
    while(cin>>n>>r)
    {
        if(n==0&&r==0)
            break;
        else
        {
            int cost[200][200],u,v,c;
            for(int i=0; i<=n; i++)
            {
                for(int j=0; j<=n; j++)
                {
                    cost[i][j]=-1;
                    if(i==j)
                        cost[i][j]=0;
                }
            }
            for(int i=0; i<r; i++)
            {
                cin>>u>>v>>c;
                cost[u][v]=c-1;
                cost[v][u]=c-1;
            }
            int s,d,t;
            cin>>s>>d>>t;
            for(int k=1; k<=n; k++)
            {
                for(int i=1; i<=n; i++)
                {
                    for(int j=1; j<=n; j++)
                    {
                        cost[i][j]=max(cost[i][j],min(cost[i][k],cost[k][j]));
                    }
                }
            }
            cout<<"Scenario #"<<tst<<endl;
            int x=ceil(t/(cost[s][d]));
            if(x*cost[s][d]==t)
                cout<<"Minimum Number of Trips = "<<x<<endl<<endl;
                else
                  cout<<"Minimum Number of Trips = "<<x+1<<endl<<endl;
            tst++;
        }
    }
    return 0;
}
