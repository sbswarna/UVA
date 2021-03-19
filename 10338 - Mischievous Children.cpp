#include<bits/stdc++.h>
using namespace std;
unsigned long long tst,m,i,j,a[30],b[20],l,c[]={1,2,6,24,120,720,5040,40320,362880,3628800,39916800,479001600,6227020800,87178291200,1307674368000,20922789888000,355687428096000,6402373705728000,121645100408832000,2432902008176640000};
double ans;
string s;
int main()
{
    cin>>tst;
    m=1;
    while(tst--)
    {
        memset(a,0,sizeof(a));
        memset(b,0,sizeof(b));
        cin>>s;
        l=s.size();
        for(i=0; i<l; i++)
        {
            a[s[i]-'A'+1]++;
        }
        long long k=0;
        for(i=1;i<=26;i++)
        {
            if(a[i]>1)
            {
                b[k]=a[i];
                k++;
            }
        }
        /*for(i=0;i<k;i++)
        {
            cout<<b[i]<<" ";
        }
        cout<<endl;*/
        double ans;
        ans=((c[l-1])*1.00);
        //printf("%lf\n",ans);
        for(i=0;i<k;i++)
        {
            if(b[i]>1)
            {
                ans=ans/(c[b[i]-1]*1.00);
            }
        }
        printf("Data set %lld: ",m);
        printf("%.0lf\n",ans);
        m++;
    }
    return 0;
}
