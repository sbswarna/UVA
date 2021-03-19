#include<bits/stdc++.h>
using namespace std;
int nodes,x,cost[200][200];
int main()
{
    while(cin>>nodes)
    {
        for(int i = 0; i < nodes; i++)
            cost[i][i] = 0xfffffff;
        for(int i = 1; i < nodes; i++)
        {
            for(int j = 0; j < i; j++)
            {
                if(scanf("%d", &x) == 1)
                    cost[i][j] = cost[j][i] = x;
                else
                    cost[i][j] = cost[j][i] = 0xfffffff, scanf("%*c");
            }
        }
        for(int k=0; k<nodes; k++)
        {
            for(int i=0; i<nodes; i++)
            {
                for(int j=0; j<nodes; j++)
                {
                    if(cost[i][j]>cost[i][k]+cost[k][j])
                    {
                        cost[i][j]=cost[i][k]+cost[k][j];
                    }
                }
            }
        }
        int mx=0;
        for(int i=1; i<nodes; i++)
        {
            mx=max(mx,cost[0][i]);
        }
        cout<<mx<<endl;
    }
    return 0;
}
