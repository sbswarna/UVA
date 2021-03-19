#include<bits/stdc++.h>
using namespace std;
long long n,s,t,visited[101],query,a;
vector<long long>unreachable,graph[101],start;
queue<long long>q;
int main()
{
    while(cin>>n)
    {
        if(n==0)
            break;
        else
        {
            for(int i=0; i<=n; i++)
            {
                graph[i].clear();
            }
            while(1)
            {
                cin>>s;
                if(s==0)
                    break;
                else
                {
                    while(1)
                    {
                        cin>>t;
                        if(t==0)
                            break;
                        else
                        {
                            graph[s].push_back(t);
                        }
                    }
                }
            }
            cin>>query;
            start.clear();
            for(int k=1; k<=query; k++)
            {
                cin>>a;
                start.push_back(a);
            }
            for(int k=0;k<start.size();k++)
            {
                //cout<<start<<endl;
                q=queue<long long>();
                unreachable.clear();
                for(int i=0; i<=101; i++)
                {
                    visited[i]=0;
                }
                q.push(start[k]);
                while(!q.empty())
                {
                    int c=q.front();
                    q.pop();
                    for(int j=0; j<graph[c].size(); j++)
                    {
                        if(visited[graph[c][j]]==0)
                        {
                            visited[graph[c][j]]=1;
                            q.push(graph[c][j]);
                        }
                    }
                }
                for(int i=1; i<=n; i++)
                {
                    if(visited[i]==0)
                        unreachable.push_back(i);
                }
                if(unreachable.size()>0)
                {
                    cout<<unreachable.size()<<" ";
                    for(int i=0; i<unreachable.size(); i++)
                    {
                        if(i!=unreachable.size()-1)
                            cout<<unreachable[i]<<" ";
                        else
                            cout<<unreachable[i]<<endl;
                    }
                }
                else
                    cout<<0<<endl;
            }
        }
    }
    return 0;
}
