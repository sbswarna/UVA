#include<bits/stdc++.h>
using namespace std;
long long i,j,n,a[100][100],r,tst;
int main()
{
    tst=1;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
            break;
        else
        {
        for(i=1; i<=n; i++)
        {
            for(j=1; j<=n; j++)
            {
                cin>>a[i][j];
            }
        }
        printf("Case %lld: ",tst);
        long long p;
        if(n%2==0)
        {
            p=n/2;
        }
        else
        {
            p=(n/2)+1;
        }
        long long s=0,c=0;
        r=1;
        while(r<=p)
        {
            for(i=1; i<=n; i++)
            {
                s=s+a[r][i];
                a[r][i]=0;
            }
            //printf("s=%lld\n",s);
            for(i=1; i<=n; i++)
            {
                s=s+a[i][n-r+1];
                a[i][n-r+1]=0;
            }
            //printf("s=%lld\n",s);
            for(i=n; i>=1; i--)
            {
                s=s+a[n-r+1][i];
                a[n-r+1][i]=0;
            }
            //printf("s=%lld\n",s);
            for(i=n; i>=1; i--)
            {
                s=s+a[i][r];
                a[i][r]=0;
            }
            //printf("s=%lld\n",s);
            cout<<s;
            if(r!=p)
            {
                cout<<" ";
            }
            else
                cout<<endl;
            s=0;
            r++;
        }
        }
        tst++;
    }
    return 0;
}
