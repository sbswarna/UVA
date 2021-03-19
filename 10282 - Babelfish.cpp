#include<bits/stdc++.h>
using namespace std;
long long i,j,k,d,p;
map<string,string>mp;
char s[50];
string t,a,b;
int main()
{
    while(cin.getline(s,33))
    {

        if(strlen(s)==0)
        {
            break;
        }
        else
        {
            for(i=0; i<strlen(s); i++)
            {
                if(s[i]==' ')
                {
                    p=i;
                    break;
                }
                else
                {
                    a.push_back(s[i]);
                }
            }
            for(i=p+1; i<strlen(s); i++)
            {
                b.push_back(s[i]);
            }
            mp[b]=a;
            a.clear();
            b.clear();
        }
    }
    while(cin>>t)
    {
        if(mp.find(t)==mp.end())
        {
            cout<<"eh"<<endl;
        }
        else
        {
            cout<<mp[t]<<endl;
        }
    }
    mp.clear();
    return 0;
}
