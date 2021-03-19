#include<bits/stdc++.h>
using namespace std;
long long c,p,mx,k,i,j;
char st[108][108];
string s[108],ans;
int main()
{
    k=0;
    mx=-1;
    while(scanf("%s",st[k])!=EOF)
    {
        s[k]=st[k];
        if(s[k]=="0")
        {
            break;
        }
        else
        {
            long long h=s[k].size();
            mx=max(mx,h);
            k++;
        }
    }
    for(i=0; i<k; i++)
    {
        long long h=s[i].size();
        if(h<mx)
        {
            for(j=0; j<mx-h; j++)
                s[i]='0'+s[i];
        }
        //cout<<s[i]<<endl;
    }
    c=0;
    for(i=mx-1; i>=0; i--)
    {
        p=0;
        for(j=0; j<k; j++)
        {
            p=p+(s[j][i]-48);
        }
        p=p+c;
        if(p>9)
        {
            ans.push_back((p%10)+48);
            c=p/10;
        }
        else
        {
            ans.push_back(p+48);
            c=0;
        }
        if(i==0)
        {
            stringstream ss;
            ss<<p;
            string m=ss.str();
            if(m.size()==3)
            {
                ans.push_back(m[1]);
                ans.push_back(m[0]);
            }
            else if(m.size()==2)
            {
                ans.push_back(m[0]);
            }
        }
    }
    for(i=ans.size()-1; i>=0; i--)
    {
        cout<<ans[i];
    }
    cout<<endl;
    return 0;
}
