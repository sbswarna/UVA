#include<bits/stdc++.h>
using namespace std;
long long int n,i,a1,b1,c1;
string s[5010],u,v,t;
long long j;
int main()
{
    s[0]="1";
    s[1]="1";
    s[2]="2";
    s[3]="3";
    for(i=4; i<=5002; i++)
    {
        long long l1=s[i-1].size();
        long long l2=s[i-2].size();
        //cout<<l1<<endl<<l2<<endl;
        v=s[i-1];
        if(l1>l2)
        {
            for(j=0; j<l1-l2; j++)
            {
                u=u+'0';
            }
            u=u+s[i-2];
        }
        else
        {
            u=s[i-2];
        }
        long long c=0;
        for(j=l1-1; j>=0; j--)
        {
            long long p=(u[j]-48)+(v[j]-48)+c;
            if(p>9)
            {
                t.push_back((p%10)+48);
                c=p/10;
            }
            else
            {
                t.push_back(p+48);
                c=0;
            }
            if(j==0)
            {
                if(p>9)
                {
                    t.push_back(c+48);
                }
            }
        }
        for(j=t.size()-1;j>=0;j--)
        {
            s[i].push_back(t[j]);
        }
        t.clear();
        v.clear();
        u.clear();
    }

    while(scanf("%lld",&n)==1)
    {
        cout<<s[n-1]<<endl;
    }
    return 0;
}
