#include<bits/stdc++.h>
using namespace std;
long long a[105][105],i,j,n,row;
int main()
{
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
            break;
        else
        {
            long long c=0,s1,s2,f=0,f1=0,col,d=0;

            for(i=1;i<=n;i++)
            {
                s1=0;
                for(j=1;j<=n;j++)
                {
                    cin>>a[i][j];
                    s1=s1+a[i][j];
                }
                //cout<<s1<<endl;
                if(s1%2==1)
                {
                    f=1;
                    row=i;
                    c++;
                }
            }
            for(i=1;i<=n;i++)
            {
                s2=0;
                for(j=1;j<=n;j++)
                {
                   s2=s2+a[j][i];
                }
               // cout<<s2<<endl;
                if(s2%2==1)
                   {
                       f1=1;
                       col=i;
                       d++;
                   }
            }
            //cout<<f<<" "<<f1<<endl;
            if(f==0&&f1==0)
            {
                printf("OK\n");
            }
            else if((f==1||f1==1)&&(d>1||c>1))
            {
                printf("Corrupt\n");
            }
            else if(f==1&&f1==1&&c==1&&d==1)
            {
                printf("Change bit (%lld,%lld)\n",row,col);
            }
        }
    }
    return 0;
}
