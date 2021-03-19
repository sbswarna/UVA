#include<bits/stdc++.h>

using namespace std;

vector<int>graph[110];
int color[110];

void resetColor(int m)
{
    for(int i=0; i<m; i++)
    {
        color[i]=0;
    }
}

void init(int m)
{
    resetColor(m);
    for(int i=0; i<m; i++)
    {
        graph[i].clear();
    }
}

bool isValidMove(int n)
{
    if(color[n]==0)return true;
    return false;
}

void dfs(int u)
{
    color[u]=1;

    int v;

    for(int i=0; i<graph[u].size(); i++)
    {
        v=graph[u][i];
        if(isValidMove(v))
        {
            dfs(v);
        }
    }
    color[u]=2;
}
int main()
{
    int ks,m;
    char ch[10];

    scanf("%d\n",&ks);

    for(int cas=1; cas<=ks; cas++)
    {

        cin>>ch;
        m=ch[0]-'A'+1;
        gets(ch);

        init(m);

        while(gets(ch)&&strlen(ch))
        {
            graph[ch[0]-'A'].push_back(ch[1]-'A');
            graph[ch[1]-'A'].push_back(ch[0]-'A');
        }
        int cnt=0;
        for(int i=0; i<m; i++)
        {
            if(color[i]==0)
            {
                cnt++;
               dfs(i);
            }
        }
        cout<<cnt<<endl;
        if(cas!=ks)
            cout<<endl;
    }
    return 0;
}
