#include<bits/stdc++.h>
using namespace std;
long long t,s,e,graph[21][21],u,v,n,q;
int main()
{
    int t=1,tst=1;
    for(int i=1; i<=20; i++)
    {
        for(int j=1; j<=20; j++)
            graph[i][j]=9999;
    }
    while(cin>>n)
    {
        for(int i=1; i<=n; i++)
        {
            cin>>v;
            graph[t][v]=1;
            graph[v][t]=1;
        }
        if(t==19)
        {
//        for(int i=1;i<=20;i++)
//        {
//            for(int j=1;j<=20;j++)
//            {
//                cout<<graph[i][j]<<" ";
//            }
//            cout<<endl;
//        }
            t=0;
            for(int i=1; i<=20; i++)
            {
                for(int j=1; j<=20; j++)
                {
                    for(int k=1; k<=20; k++)
                    {
                        if(graph[j][k]>graph[j][i]+graph[i][k])
                        {
                            graph[j][k]=graph[j][i]+graph[i][k];
                        }
                    }
                }
            }
            cin>>q;
            cout<<"Test Set #"<<tst<<endl;
            for(int i=1; i<=q; i++)
            {
                cin>>s>>e;
                cout<<setw(2)<<s<<" to "<<setw(2)<<e<<": "<<graph[s][e]<<endl;
            }
            cout<<endl;
            for(int i=1; i<=20; i++)
            {
                for(int j=1; j<=20; j++)
                {
                    graph[i][j]=999999;
                }
            }
            tst++;
        }
        t++;
    }
    return 0;
}
