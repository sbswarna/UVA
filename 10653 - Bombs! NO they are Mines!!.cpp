#include<bits/stdc++.h>
using namespace std;
long long mp[1003][1003],i,j,c,r1,c1,bomb,row,r;
long long dx[]= {0,0,1,-1};
long long dy[]= {1,-1,0,0};
long long visited[1003][1003];
queue<long long>q;
long long ex,ey,sx,sy;
int main()
{
    while(scanf("%lld%lld",&r,&c)==2)
    {
        if(r==0&&c==0)
            break;
        else
        {
            memset(mp,0,sizeof(mp));
            scanf("%lld",&row);
            for(i=1; i<=row; i++)
            {
                scanf("%lld",&r1);
                scanf("%lld",&bomb);
                for(j=1; j<=bomb; j++)
                {
                    scanf("%lld",&c1);
                    mp[r1][c1]=1;
                }
            }
            /*for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {
                    cout<<mp[i][j]<<" ";
                }
                cout<<endl;
            }*/
            cin>>sx>>sy>>ex>>ey;
            memset(visited,-1,sizeof(visited));
            q.push(sx);
            q.push(sy);
            visited[sx][sy]=0;
            while(!q.empty())
            {
                long long x=q.front();
                q.pop();
                long long y=q.front();
                q.pop();
                for(i=0; i<4; i++)
                {
                    if(x+dx[i]>=0&&x+dx[i]<r&&y+dy[i]>=0&&y+dy[i]<c)
                    {
                        if(visited[x+dx[i]][y+dy[i]]==-1)
                        {
                            if(mp[x+dx[i]][y+dy[i]]==0)
                            {
                                long long g=x+dx[i];
                                q.push(g);
                                long long h=y+dy[i];
                                q.push(h);
                                visited[g][h]=visited[x][y]+1;
                            }
                        }
                    }
                }
            }
            cout<<visited[ex][ey]<<endl;
        }
    }
    return 0;
}
