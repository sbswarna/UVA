
#include<bits/stdc++.h>
using namespace std;
int node,edge,u,v;
stack<int>stk;
int visited[105];
vector<int>graph[105];
void topsort(int s)
{
    visited[s]=1;
    for(int i=0;i<graph[s].size();i++)
    {
        if(visited[graph[s][i]]==0)
        {
            topsort(graph[s][i]);
        }
    }
    stk.push(s);
}
void performtopologicalsort()
{
    for(int i=1; i<=node; i++)
    {
        if(visited[i]==0)
            topsort(i);
    }
    while(!stk.empty())
    {
        if(stk.size()!=1)
            cout<<stk.top()<<" ";
        else
            cout<<stk.top()<<endl;
        stk.pop();
    }
}
int main()
{
    while(cin>>node>>edge)
    {
        if(node==0&&edge==0)
            break;
        else
        {
            memset(visited,0,sizeof(visited));
            for(int i=0;i<=node;i++)
            {
                graph[i].clear();
            }
            for(int i=1; i<=edge; i++)
            {
                cin>>u>>v;
                graph[u].push_back(v);
            }
            performtopologicalsort();
        }
    }
    return 0;
}
