#include<bits/stdc++.h>
using namespace std;
char s[200];
string t;
long long n,i,sm;
int main()
{
    while(scanf("%lld%s",&n,s)!=EOF)
    {
        if(n==0&&strcmp(s,"0")==0)
            break;
        else
        {
            t.clear();
            sm=0;
            for(i=0;i<strlen(s);i++)
            {
                if(s[i]!=n+48)
                {
                    t.push_back(s[i]);
                    sm=sm+(s[i]-48);
                }
            }
            if(sm==0||t.size()==0)
            {
                cout<<0<<endl;
            }
            else
                cout<<t<<endl;
        }
    }
}
