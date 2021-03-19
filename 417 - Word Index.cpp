#include<bits/stdc++.h>
using namespace std;
string s[83690];
long long i,j,k,l;
map<string,long long>mp;
int main()
{
    for(i=0; i<26; i++)
    {
        s[i]=i+'a';
        mp[s[i]]=i;
    }
    k=26;
    for(i=0; i<26; i++)
    {
        for(j=i+1; j<26; j++)
        {
            char p=j+'a';
            s[k]=s[i]+p;
            mp[s[k]]=k;
            k++;
        }
    }
    long long q=k;
    for(i=26;i<q;i++)
    {
        for(j=s[i][1]-'a'+1;j<26;j++)
        {
            char p=j+'a';
            s[k]=s[i]+p;
            mp[s[k]]=k;
            k++;
        }
    }
    long long u=q;
    q=k;
    for(i=u;i<q;i++)
    {
        for(j=s[i][2]-'a'+1;j<26;j++)
        {
            char p=j+'a';
            s[k]=s[i]+p;
            mp[s[k]]=k;
            k++;
        }
    }
    long long t=q;
    q=k;
    for(i=t;i<q;i++)
    {
        for(j=s[i][3]-'a'+1;j<26;j++)
        {
            char p=j+'a';
            s[k]=s[i]+p;
            mp[s[k]]=k;
            k++;
        }
    }
    string inp;
    char inp1[6];
while(scanf("%s",inp1)!=EOF)
{
    inp=inp1;
    if(mp.find(inp)==mp.end())
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<mp[inp]+1<<endl;
    }
}
return 0;
}
