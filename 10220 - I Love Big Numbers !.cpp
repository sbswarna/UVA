#include<bits/stdc++.h>
using namespace std;
long long i,n,p,m,j,a[1009];
string s[1009],t,u,v,s1,w,x;
int main()
{
    memset(a,0,sizeof(a));
    s[12]="479001600";
    a[0]=1;
    a[1]=1;
    a[2]=2;
    a[3]=3;
    a[4]=6;
    a[5]=1+2+0;
    a[6]=7+2+0;
    a[7]=5+0+4+0;
    a[8]=4+0+3+2+0;
    a[9]=3+6+2+8+8+0;
    a[10]=3+6+2+8+8;
    a[11]=3+9+9+1+6+8;
    a[12]=4+7+9+1+6;
    for(i=13; i<=999; i++)
    {
        if(i<=99)
        {
            stringstream ss;
            ss << i;
            t=ss.str();
            //cout<<t<<endl;
            p=0;
            for(j=s[i-1].size()-1; j>=0; j--)
            {
                m=(s[i-1][j]-48)*(t[1]-48);
                m=m+p;
                if(m>9)
                {
                    u.push_back((m%10)+48);
                    p=m/10;
                }
                else
                {
                    u.push_back(m+48);
                    p=0;
                }
                if(j==0)
                {
                    if(m>9)
                    {
                        u.push_back((m/10)+48);
                    }
                }
            }
            v.push_back(0+48);
            p=0;
            for(j=s[i-1].size()-1; j>=0; j--)
            {
                m=(s[i-1][j]-48)*(t[0]-48);
                m=m+p;
                if(m>9)
                {
                    v.push_back((m%10)+48);
                    p=m/10;
                }
                else
                {
                    v.push_back(m+48);
                    p=0;
                }
                if(j==0)
                {
                    if(m>9)
                    {
                        v.push_back((m/10)+48);
                    }
                }
            }
            if(u.size()>v.size())
            {
                for(j=v.size(); j<u.size(); j++)
                {
                    v.push_back(0+48);
                }
            }
            else if(v.size()>u.size())
            {
                for(j=u.size(); j<v.size(); j++)
                {
                    u.push_back(0+48);
                }
            }
            p=0;
            for(j=0; j<u.size(); j++)
            {
                m=(u[j]-48)+(v[j]-48)+p;
                if(m>9)
                {
                    s1.push_back((m%10)+48);
                    p=m/10;
                }
                else
                {
                    s1.push_back(m+48);
                    p=0;
                }
                if(j==u.size()-1)
                {
                    if(m>9)
                        s1.push_back(p+48);
                }
            }
            u.clear();
            v.clear();
            t.clear();
        }
        else if(i>=100&&i<=999)
        {
            stringstream ss;
            ss << i;
            t=ss.str();
            //cout<<t<<endl;
            p=0;
            for(j=s[i-1].size()-1; j>=0; j--)
            {
                m=(s[i-1][j]-48)*(t[2]-48);
                m=m+p;
                if(m>9)
                {
                    u.push_back((m%10)+48);
                    p=m/10;
                }
                else
                {
                    u.push_back(m+48);
                    p=0;
                }
                if(j==0)
                {
                    if(m>9)
                    {
                        u.push_back((m/10)+48);
                    }
                }
            }
            v.push_back(0+48);
            p=0;
            for(j=s[i-1].size()-1; j>=0; j--)
            {
                m=(s[i-1][j]-48)*(t[1]-48);
                m=m+p;
                if(m>9)
                {
                    v.push_back((m%10)+48);
                    p=m/10;
                }
                else
                {
                    v.push_back(m+48);
                    p=0;
                }
                if(j==0)
                {
                    if(m>9)
                    {
                        v.push_back((m/10)+48);
                    }
                }
            }
            w=w+"00";
            p=0;
            for(j=s[i-1].size()-1; j>=0; j--)
            {
                m=(s[i-1][j]-48)*(t[0]-48);
                m=m+p;
                if(m>9)
                {
                    w.push_back((m%10)+48);
                    p=m/10;
                }
                else
                {
                    w.push_back(m+48);
                    p=0;
                }
                if(j==0)
                {
                    if(m>9)
                    {
                        w.push_back((m/10)+48);
                    }
                }
            }
            long long mx=max(u.size(),v.size());
            long long q=w.size();
            mx=max(mx,q);
            if(u.size()!=mx)
            {
                for(j=u.size(); j<mx; j++)
                {
                    u.push_back(0+48);
                }
            }
            if(v.size()!=mx)
            {
                for(j=v.size(); j<mx; j++)
                {
                    v.push_back(0+48);
                }
            }
            if(w.size()!=mx)
            {
                for(j=w.size(); j<mx; j++)
                {
                    w.push_back(0+48);
                }
            }
            p=0;
            for(j=0; j<u.size(); j++)
            {
                m=(u[j]-48)+(v[j]-48)+(w[j]-48)+p;
                if(m>9)
                {
                    s1.push_back((m%10)+48);
                    p=m/10;
                }
                else
                {
                    s1.push_back(m+48);
                    p=0;
                }
                if(j==u.size()-1)
                {
                    if(m>9)
                        s1.push_back(p+48);
                }
            }
            u.clear();
            v.clear();
            t.clear();
            w.clear();
        }
        for(j=s1.size()-1; j>=0; j--)
        {
            s[i].push_back(s1[j]);
            a[i]=a[i]+(s1[j]-48);
        }
        s1.clear();
    }
    a[1000]=a[999];
    while(scanf("%lld",&n)==1)
    {
        cout<<a[n]<<endl;
    }
    return 0;
}
