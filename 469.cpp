#include<bits/stdc++.h>
using namespace std;
long long tst,visited[105][105],cnt,l,r,row;
string s[10005];
long long dx[]= {0,0,1,-1,-1,-1,1,1};
long long dy[]= {1,-1,0,0,1,-1,-1,1};
long long wetland(long long i1,long long j1)
{
    if(s[i1][j1]=='W')
    {
        cnt=1;
        queue<long long>q;
        for(int i=0; i<105; i++)
            memset(visited[i],0,sizeof(visited[i]));
        visited[i1][j1]=1;
        q.push(i1);
        q.push(j1);
        while(!q.empty())
        {
            long long x=q.front();
            q.pop();
            long long y=q.front();
            q.pop();
            for(int i=0; i<8; i++)
            {
                if(x+dx[i]>=0&&y+dy[i]>=0&&x+dx[i]<99&&y+dy[i]<99&&s[x+dx[i]][y+dy[i]]=='W')
                {
                    if(visited[x+dx[i]][y+dy[i]]==0)
                    {
                        cnt++;
                        long long h=x+dx[i];
                        q.push(h);
                        long long g=y+dy[i];
                        q.push(g);
                        visited[h][g]=1;
                    }
                }
            }
        }
    }
    return cnt;
}
int main()
{
    cin>>tst;
    getchar();
    getchar();

    while(tst--)
    {
        row=0;
        while(getline(cin,s[row]))
        {
            if(s[row].size()==0)
            {
                break;
            }
            else
            {
                if(s[row][0]=='L'||s[row][0]=='W')
                {
                    row++;
                }
                else
                {
                    cnt=0;
                    long long a[5]= {0},k=0;
                    for(int j=0; j<s[row].size(); j++)
                    {
                        if(s[row][j]!=' ')
                        {
                            a[k]=(a[k]*10)+(s[row][j]-'0');
                        }
                        else
                        {
                            k++;
                        }
                    }
                    //cout<<a[0]<<" "<<a[1]<<endl;
                    long long w=wetland(a[0]-1,a[1]-1);
                    cout<<w<<endl;
                    row++;
                }
            }
        }
        if(tst)
            cout<<endl;
    }
    return 0;
}
/*
LLLWLLWLL
LLLWLWLWL
LLWLLWWWL
WLLWWLLLW
WLWLLLLWL
3 3
4 1
5 3
2 4
4 4
*/
