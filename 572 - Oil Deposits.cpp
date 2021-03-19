#include<iostream>
using namespace std;
long long c,i,j,m,n,k,l=0;
char s[1000][1000];
void oil(long long i,long long j)
{
    if(s[i][j]!='@'||i>n-1||j>m-1||i<0||j<0)
    {
        return ;
    }
    s[i][j]='*';
    oil(i,j+1);
    oil(i,j-1);
    oil(i+1,j);
    oil(i+1,j+1);
    oil(i+1,j-1);
    oil(i-1,j-1);
    oil(i-1,j+1);
    oil(i-1,j);
}


int main()
{
    while(!(cin.eof()))
    {
        c=0;
        cin>>n>>m;
        getchar();
        if(n==0)
            break;
        else
        {
            for(i=0; i<n; i++)
            {
                for(j=0; j<m; j++)
                {
                    cin>>s[i][j];
                }
            }
            for(i=0; i<n; i++)
            {
                for(j=0; j<m; j++)
                {
                    if(s[i][j]=='@')
                    {
                        c++;
                        oil(i,j);
                    }
                }
            }
            cout<<c<<endl;

        }
    }
    return 0;
}
