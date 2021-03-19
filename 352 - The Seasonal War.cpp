#include<iostream>
#include<cstring>
using namespace std;
long long c=0,i,j,m,n,t;
char s[100][100];
void war(long long i,long long j)
{
    if(s[i][j]=='0'||i>=n||j>=n||i<0||j<0)
    {
        return;
    }
    s[i][j]='0';
    war(i-1,j+1);
    war(i+1,j-1);
    war(i+1,j+1);
    war(i-1,j-1);
    war(i,j+1);
    war(i,j-1);
    war(i+1,j);
    war(i-1,j);
}
int main()
{
    t=1;
    while(cin>>n)
    {
        c=0;
        getchar();
        for(i=0; i<n; i++)
        {
        	scanf("%s",s[i]);
        }

        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if(s[i][j]=='1')
                {
                    c++;
                    war(i,j);
                }
            }
        }
        cout<<"Image number "<<t<<" contains "<<c<<" war eagles."<<endl;
        t++;
    }

    return 0;
}
