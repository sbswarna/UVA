#include<bits/stdc++.h>
using namespace std;
long long a[1002],n;
int main()
{
    while(cin>>n)
    {
        if(n==0)
            break;
        else
        {
            int f=0;
            for(int i=0; i<n; i++)
            {
                cin>>a[i];
                if(a[i]!=0)
                {
                    f=1;
                }
            }
            if(f==0)
                cout<<0<<endl;
            else
            {
                long long k=0,b[1002];
                for(int i=0; i<n; i++)
                {
                    if(a[i]!=0)
                    {
                        b[k]=a[i];
                        k++;
                    }
                }
                for(int i=0;i<k;i++)
                {
                    if(i==k-1)
                        cout<<b[i]<<endl;
                    else
                        cout<<b[i]<<" ";
                }
            }

        }
    }
    return 0;
}
