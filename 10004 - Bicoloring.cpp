#include<bits/stdc++.h>
using namespace std;
queue<long long>q;
long long n,e,visited[1000],u,v;
vector<long long>graph[1000];
int main()
{
    while(cin>>n)
    {
        if(n==0)
            break;
        else
        {
            for(int i=0; i<=n; i++)
                graph[i].clear();
            cin>>e;
            for(int i=1; i<=e; i++)
            {
                cin>>u>>v;
                graph[u].push_back(v);
                graph[v].push_back(u);
            }
            for(int i=0; i<=n; i++)
            {
                visited[i]=0;
            }
            q=queue<long long>();
            q.push(0);
            visited[0]=1;
            int f=0;
            while(!q.empty())
            {
                long long x=q.front();
                q.pop();
                for(int i=0; i<graph[x].size(); i++)
                {
                    if(visited[graph[x][i]]==0)
                    {
                        if(visited[x]==1)
                        {
                            visited[graph[x][i]]=2;
                            q.push(graph[x][i]);
                        }
                        else if(visited[x]==2)
                        {
                            visited[graph[x][i]]=1;
                            q.push(graph[x][i]);
                        }
                    }
                    else
                    {
                        if(visited[graph[x][i]]==visited[x])
                        {
                            f=1;
                        }
                    }
                }
            }
            if(f==0)
            {
                cout<<"BICOLORABLE."<<endl;
            }
            else
            {
                cout<<"NOT BICOLORABLE."<<endl;
            }
        }
    }
    return 0;
}
