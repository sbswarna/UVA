#include<iostream>
#include<cstring>
#include<cmath>
#include<vector>
#include<cstdio>
using namespace std;
int main()
{
    long long i,m,t,n,b;
    vector<long long>v;
    char s[1000000],c;
    cin>>t;
    m=1;
    while(m<=t)
    {
        v.clear();
        scanf("%s",s);

        scanf("%lld",&b);
        for(i=0;i<b;i++)
        {
        scanf("%lld",&n);
        v.push_back(n);
        }
        /*for(i=0;i<v.size();i++)
        {
            cout<<v[i]<<' ';
        }
        cout<<endl;*/
        long long sum=0, r=0,f=0,j,a[1000];
        for(j=0;j<b;j++)
        {
            for(i=0;i<strlen(s);i++)
        {
            sum=r*10+(s[i]-48);
            r=sum%v[j];
        }
        a[j]=r;
        }
        for(j=0;j<b;j++)
        {
       if(a[j]==0)
            {
                f=0;
            }
            else
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            printf("%s - Wonderful.\n",s);
        }
        else
        {
            printf("%s - Simple.\n",s);
        }
        m++;
    }
    return 0;
}
