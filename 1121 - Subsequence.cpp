#include<bits/stdc++.h>
using namespace std;
long long n,s,a[100002],x;
int main()
{
    while(cin>>n>>s)
    {
        int f=0;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            if(a[i]>=s)
            {
                f=1;
            }
        }
        if(f==1)
        {
            cout<<1<<endl;
        }
        else
        {
            f=0;
            for(int i=2; i<n; i++)
            {
                long long mx=0;
                for(int j=0; j<i; j++)
                {
                    mx+=a[j];
                }
                long long window=mx;
                //cout<<i<<":\n";
                //cout<<window<<endl;
                for(int j=i; j<n; j++)
                {
                    window+=a[j]-a[j-i];
                    //cout<<window<<endl;
                    if(window>=s)
                    {
                        f=1;
                        break;
                    }
                }
                if(f==1)
                {
                    x=i;
                    break;
                }
            }
            if(f==1)
                cout<<x<<endl;
            else
                cout<<0<<endl;
        }
    }
    return 0;
}
