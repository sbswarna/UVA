#include<bits/stdc++.h>
using namespace std;
long long n,i,j,tst,k;
long long visited[205][205];
char s[205][205];
queue<long long>q;
int main()
{
    tst=1;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
            break;
        else
        {
            long long sx,sy,c=0;
            getchar();
            for(i=0; i<n; i++)
            {
                for(j=0; j<n; j++)
                {
                    cin>>s[i][j];
                }
            }
            long long f2=0;
            for(i=0; i<n; i++)
            {
                long long f1=0;
                if(s[0][i]=='b')
                {
                    sx=0;
                    sy=i;
                    memset(visited,-1,sizeof(visited));
                    q.push(sx);
                    q.push(sy);
                    visited[sx][sy]=0;
                    long long dx[]= {-1,-1,0,0,1,1};
                    long long dy[]= {-1,0,-1,1,0,1};
                    while(!q.empty())
                    {
                        long long x=q.front();
                        q.pop();
                        long long y=q.front();
                        q.pop();
                        for(k=0; k<6; k++)
                        {
                            long long x1=x+dx[k];
                            long long y1=y+dy[k];
                            if(x1>=0&&x1<n&&y1>=0&&y1<n)
                            {
                                if(s[x1][y1]=='b')
                                {
                                    if(visited[x1][y1]==-1)
                                    {
                                        visited[x1][y1]=1;
                                        q.push(x1);
                                        q.push(y1);
                                    }
                                }
                            }
                        }
                    }
                    for(k=0;k<n;k++)
                    {
                        if(visited[n-1][k]==1)
                        {
                            f1=1;
                            break;
                        }
                    }
                }
                if(f1==1)
                {
                    f2=1;
                    break;
                }
            }
            if(f2==1)
            {
                cout<<tst<<" "<<"B"<<endl;
            }
            else
            {
                cout<<tst<<" "<<"W"<<endl;
            }
        }
            tst++;
        }
        return 0;
    }
