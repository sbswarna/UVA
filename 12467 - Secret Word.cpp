#include<bits/stdc++.h>
using namespace std;
long long tst;
string s,t,s1,ans;
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>s;
        s1=s;
        reverse(s1.begin(),s1.end());
        long long mx=0,k,j,p;
        for(int i=0;i<s.size();i=p)
        {
            k=1;
            if(s1[i]==s[0])
            {
                t.push_back(s1[i]);
                for(j=i+1;j<=s.size();j++)
                {
                    if(s[k]!=s1[j])
                    {
                        p=j;
                        break;
                    }
                    else if(s[k]==s1[j]&&j!=s.size())
                    {
                        t.push_back(s1[j]);
                        k++;
                    }
                }
                //cout<<t<<endl;
            }
            else
            {
                p=i+1;
            }
            if(t.size()>mx)
            {
                mx=t.size();
                ans=t;
            }
            t.clear();
        }
        //cout<<ans[0]<<endl;
        reverse(ans.begin(),ans.end());
        cout<<ans<<endl;
    }
    return 0;
}
