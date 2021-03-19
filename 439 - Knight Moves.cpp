#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long sx,sy,ex,ey,n,visited[10][10],i,j;
    int dx[8] = {2, 2, -2, -2, 1, 1, -1, -1};
    int dy[8] = {-1, 1, 1, -1, 2, -2, 2, -2};
    queue<long long>q;
    char a[3],b[3];
    while(scanf("%s%s",a,b)!=EOF)
    {
    sx=a[0]-'a';
    sy=a[1]-'0';
    ex=b[0]-'a';
    ey=b[1]-'0';
    for(i=0; i<10; i++)
        memset(visited[i],-1,sizeof(visited[i]));
    visited[sx][sy]=0;
    q.push(sx);
    q.push(sy);
    while(!q.empty())
    {
        long long x=q.front();
        q.pop();
        long long y=q.front();
        q.pop();
        for(i=0; i<8; i++)
        {
            if(x+dx[i]>=0&&y+dy[i]>=1&&x+dx[i]<8&&y+dy[i]<=8)
            {
                if(visited[x+dx[i]][y+dy[i]]==-1)
                {
                    long long h=x+dx[i];
                    q.push(h);
                    long long g=y+dy[i];
                    q.push(g);
                    visited[h][g]=visited[h-dx[i]][g-dy[i]]+1;
                }
            }
        }
    }
    /*for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            cout<<visited[i][j]<<" ";
        cout<<endl;
    }*/
   printf("To get from %s to %s takes %lld knight moves.\n",a,b,visited[ex][ey]);
    }
    return 0;

}
