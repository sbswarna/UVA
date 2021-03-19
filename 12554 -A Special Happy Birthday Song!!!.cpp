#include<bits/stdc++.h>
using namespace std;
string s[20],t[105];
long long i,j,n;
int main()
{
    s[1]="Happy";
    s[2]="birthday";
    s[3]="to";
    s[4]="you";
    s[5]="Happy";
    s[6]="birthday";
    s[7]="to";
    s[8]="you";
    s[9]="Happy";
    s[10]="birthday";
    s[11]="to";
    s[12]="Rujia";
    s[13]="Happy";
    s[14]="birthday";
    s[15]="to";
    s[16]="you";
    while(scanf("%lld",&n)==1)
    {
        for(i=1; i<=n; i++)
            cin>>t[i];
        long long d,k;
        if(n<=16)
        {
            d=1;
            k=1;
            for(i=1; i<=16; i++)
            {
                cout<<t[d]<<": "<<s[k]<<endl;
                d++;
                k++;
                if(k>16)
                    k=1;
                if(d==n+1)
                    d=1;
            }
        }
        else
        {
            long long f;
            f=n%16;
            if(f==0)
            {
                f=n/16;
                d=1;
                k=1;
                for(i=1; i<=f*16; i++)
                {
                    cout<<t[d]<<": "<<s[k]<<endl;
                    d++;
                    k++;
                    if(k>16)
                        k=1;
                    if(d==n+1)
                        d=1;
                }
            }
            else
            {
                f=n/16;
                f=f+1;
                d=1;
                k=1;
                for(i=1; i<=f*16; i++)
                {
                    cout<<t[d]<<": "<<s[k]<<endl;
                    d++;
                    k++;
                    if(d==n+1)
                        d=1;
                    if(k>16)
                        k=1;
                }
            }
        }
    }
    return 0;
}
