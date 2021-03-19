#include<bits/stdc++.h>
using namespace std;
long long n,e,v,tst,start,mx;
vector<long long>graph[2505];
int main()
{
    while(cin>>n)
    {
        for(int i=0; i<=n; i++)
            graph[i].clear();
        for(int i=0; i<n; i++)
        {
            cin>>e;
            for(int j=1; j<=e; j++)
            {
                cin>>v;
                graph[i].push_back(v);
            }
        }
        cin>>tst;
        while(tst--)
        {
            long long visited[2505]= {0},freq[2505]= {0},cost[2505]= {0};
            cin>>start;
            queue<long long>q;
            long long mx=-1,day;
            visited[start]=1;
            q.push(start);
            while(!q.empty())
            {
                long long x=q.front();
                q.pop();
                for(int j=0; j<graph[x].size(); j++)
                {
                    if(visited[graph[x][j]]==0)
                    {
                        visited[graph[x][j]]=1;
                        cost[graph[x][j]]=cost[x]+1;
                        q.push(graph[x][j]);
                    }
                }
            }
            for(int i=0; i<n; i++)
            {
                //cout<<cost[i]<<" ";
                freq[cost[i]]++;
            }
            //cout<<endl;
            for(int i=1; i<n; i++)
            {
                if(freq[i]>mx)
                {
                    mx=freq[i];
                    day=i;
                }
            }
            if(mx==0)
                cout<<0<<endl;
            else
                cout<<mx<<" "<<day<<endl;
        }
    }
    return 0;
}
