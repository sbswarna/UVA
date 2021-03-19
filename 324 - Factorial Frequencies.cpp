#include<bits/stdc++.h>
using namespace std;
long long i,n,p,m,j;
string s[400],t,u,v,s1,w,x;
int main()
{
    s[0]="1";
    s[1]="1";
    s[2]="2";
    s[3]="6";
    s[4]="24";
    s[5]="120";
    s[6]="720";
    s[7]="5040";
    s[8]="40320";
    s[9]="362880";
    s[10]="3628800";
    s[11]="39916800";
    s[12]="479001600";
    for(i=13; i<=370; i++)
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
        }
        s1.clear();
    }
    long long a[15];
    while(scanf("%lld",&n)==1)
    {
        memset(a,0,sizeof(a));
        for(i=0; i<s[n].size(); i++)
        {
            a[s[n][i]-48]++;
        }
        printf("%lld! --\n",n);
        for(i=0; i<=9; i++)
        {
            if(i==0||i==5)
            {
                cout<<"   ";
                printf("(%lld)%5lld",i,a[i]);
            }
            else if(i==4||i==9)
            {
                cout<<"    ";
                printf("(%lld)%5lld",i,a[i]);
                cout<<endl;
            }
            else
            {
                cout<<"    ";
                printf("(%lld)%5lld",i,a[i]);
            }
        }
    }
    return 0;
}
