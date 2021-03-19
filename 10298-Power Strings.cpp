#include<bits/stdc++.h>
using namespace std;
vector<int>z;
string in,p;
int zalgo(string pattern, string text)
{
    string s = pattern + '$' + text;
    int n = s.length();
    int goal = pattern.length();
    for(int i=0;i<=1+(s.size()*2);i++)
        z.push_back(0);
    int r = 0, l = 0, i;
    for (int k = 1; k < n; k++)
    {
        if (k > r)
        {
            for (i = k; i < n && s[i] == s[i - k]; i++);
            if (i > k)
            {
                z[k] = i - k;
                l = k;
                r = i - 1;
            }
        }
        else
        {
            int kt = k - l, b = r - k + 1;
            if (z[kt] > b)
            {
                for (i = r + 1; i < n && s[i] == s[i - k]; i++);
                z[k] = i - k;
                l = k;
                r = i - 1;
            }
        }
        if (z[k] == goal)
            return 1;
    }
    return 0;
}

int main()
{
    int x=1;
    while(cin>>in&&in!=".")
    {
        z.clear();
        //cout<<"case="<<x++<<endl;
        if(in.size()==1)
        {
            cout<<1<<endl;
        }
        else
        {
            zalgo(in,in);
            int ans,mx=-1;
            //sort(z.begin(),z.begin()+in.size());
            for(int i=0;i<in.size();i++)
            {
                cout<<z[i]<<" ";
                if(z[i]>mx)
                {
                    mx=z[i];
                    ans=i;
                }
            }
            cout<<endl;
            if(ans==0)
                ans=in.size();
            //cout<<ans<<endl;
            cout<<in.size()/ans<<endl;
        }
    }
    return 0;
}
