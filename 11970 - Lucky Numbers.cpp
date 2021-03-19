#include<bits/stdc++.h>
using namespace std;
vector<long long>v;
int main()
{
    long long i,c,n,tst;
    c=0;
    for(i=1; i<=sqrt(1000000000); i++)
    {
        v.push_back(i*i);
    }
    cin>>tst;
    long long j=1;
    while(tst--)
    {
        cin>>n;
        vector<long long>a;
        a.clear();
        for(i=0;i<=v.size();i++)
        {
            if(v[i]>=n)
                break;
            else
            {
                long long x=(n-v[i]);
                long long p=x/sqrt(v[i]);
                if(sqrt(v[i])*p==x)
                    a.push_back(x);
            }
        }
        printf("Case %lld: ",j);
        for(i=a.size()-1;i>=0;i--)
        {
            cout<<a[i];
            if(i!=0)
                cout<<" ";
        }
        cout<<endl;
        j++;
    }
    return 0;
}
