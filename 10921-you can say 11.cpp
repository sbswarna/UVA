#include<bits/stdc++.h>
using namespace std;
long long int l,i,p,q,d;
string s;
int main()
{

    while(cin>>s)
    {
        if(s=="0")
        {
            break;
        }
        else
        {
            l=s.size();
            d=0;
            s[l]='0';
            for(i=1; i<=l; i=i+2)
            {

                p=s[i]-48;
                q=s[i-1]-48;
                d=d+(q-p);
            }
            if(d%11==0)
            {
                for(i=0; i<l; i++)
                {
                    cout<<s[i];
                }
                cout<<" is a multiple of 11."<<endl;
            }
            else
            {
                for(i=0; i<l; i++)
                {
                    cout<<s[i];
                }
                cout<<" is not a multiple of 11."<<endl;
            }
        }
    }
    return 0;
}
