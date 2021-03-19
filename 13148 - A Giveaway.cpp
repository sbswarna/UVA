#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
            break;
        else
        {
            double p,q;
            long long a,b;
            p=sqrt(n);
            a=ceil(p);
            q=pow(n,(1.00/3.00));
            b=ceil(q);
            //cout<<a<<" "<<b<<endl;
            if(a*a==n&&b*b*b==n)
            {
                cout<<"Special"<<endl;
            }
            else
            {
                cout<<"Ordinary"<<endl;
            }
        }
    }
}
