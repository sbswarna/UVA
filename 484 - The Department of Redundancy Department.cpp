#include<bits/stdc++.h>
using namespace std;
long long a,i,c;
map<long long,long long>mp,mp1,mp2;
int main()
{
    c=1;
   while(scanf("%lld",&a)==1)
    {

        if(mp1.find(a)==mp1.end())
        {
            mp1[a]=c;
            mp2[c]=a;
            c++;
        }
        if(mp.find(a)==mp.end())
        {
            mp[a]=1;
        }
        else
        {
            mp[a]++;
        }
    }
    map<long long,long long> :: iterator it,it1;
    for(it1=mp2.begin();it1!=mp2.end();it1++)
    {
        cout<<(*it1).second<<" "<<mp[(*it1).second]<<endl;
    }
    mp1.clear();
    mp.clear();
    mp2.clear();
    return 0;

}
