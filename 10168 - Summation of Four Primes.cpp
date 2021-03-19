#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstring>
#include<cstdio>
using namespace std;
long long int n,b[10000005],i,j,p,q,f,f1,k,p1,q1,p2,q2;
int main ()
{
    memset(b,0,sizeof(b));
    for(i=4; i<=10000003; i=i+2)
    {
        b[i]=1;
    }
    for(i=3; i<=sqrt(10000003); i=i+2)
    {
        if(b[i]==0)
        {
            for(j=i*i; j<=10000003; j=j+i)
            {
                b[j]=1;
            }
        }
    }

    while(scanf("%lld",&n)==1)
    {
        p1=0;
        q1=0;
        p2=0;
        q2=0;
        j=0;
        if(n>=8)
        {
            if(n%2==0)
            {
                p=n/2;
                q=n/2;
                if(p%2==1)
                {
                    p=p-1;
                    q=q+1;
                }
                //cout<<p<<" "<<q<<endl;
                f=0;
                for(i=2; i<p; i=i+1)
                {
                    if(b[i]==0)
                    {
                        j=p-i;
                        if(b[j]==0)
                        {
                            p1=i;
                            q1=j;
                            f=1;
                        }
                        else
                        {
                            f=0;
                        }
                    }
                    if(f==1)
                    {
                        break;
                    }
                }
                //cout<<p1<<" "<<q1<<endl;
                f1=0;
                j=0;
                for(i=2; i<q; i=i+1)
                {
                    if(b[i]==0)
                    {
                        j=q-i;
                        if(b[j]==0)
                        {
                            p2=i;
                            q2=j;
                            f1=1;
                        }
                        else
                        {
                            f1=0;
                        }
                    }
                    if(f1==1)
                    {
                        break;
                    }
                }
                //cout<<p2<<" "<<q2<<endl;
                if(f==1&&f1==1)
                {
                    cout<<p1<<" "<<q1<<" "<<p2<<" "<<q2<<endl;
                }
                else
                {
                    cout<<"Impossible."<<endl;
                }
            }
            else
            {
                for(i=n-1; i>=0; i--)
                {
                    if(b[i]==0&&n-i-2>=4)
                    {
                        p1=i;
                        break;
                    }
                }
                q1=2;
                n=n-p1-q1;
                //cout<<p1<<endl;
                f1=0;
                for(i=2; i<n; i=i+1)
                {
                    if(b[i]==0)
                    {
                        j=n-i;
                        if(b[j]==0)
                        {
                            p2=i;
                            q2=j;
                            f1=1;
                        }
                        else
                        {
                            f1=0;
                        }
                    }
                    if(f1==1)
                    {
                        break;
                    }
                }
                if(f1==1)
                {
                    cout<<p1<<" "<<p2<<" "<<q1<<" "<<q2<<endl;
                }
                else
                {
                    cout<<"Impossible."<<endl;
                }
            }
        }
        else
            cout<<"Impossible."<<endl;
    }
    return 0;
}
