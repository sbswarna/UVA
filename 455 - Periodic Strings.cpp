#include<bits/stdc++.h>
#include<string>
using namespace std;
#define MAX 1000
int lps[MAX],q,tst;
string s,p;
void build_lps(string pattern, int m)
{
    lps[0] = 0;
    lps[1] = 0;

    for(int i = 2; i <= m; i++)
    {
        int j = lps[i - 1];
        while(true)
        {
            if(pattern[j] == pattern[i - 1])
            {
                lps[i] = j + 1;
                break;
            }
            if(j == 0)
            {
                lps[i] = 0;
                break;
            }
            j = lps[j];
        }
    }
}
int kmp(string text, string pattern)
{
    int n = text.size();
    int m = pattern.size();
    build_lps(pattern, m);
    int cnt=0;
    int i = 0;
    int j = 0;
    while(true)
    {
        if(j == n)
        {
            return cnt;
        }

        if(text[j] == pattern[i])
        {
            i++;
            j++;
            if(i == m)
            {
                cnt++;
            }
        }
        else
        {
            if (i == 0)
            {
                j++;
            }
            else
            {
                i = lps[i];
            }
        }
    }
    return cnt;
}
int main()
{
    cin>>tst;
    while(tst--)
    {
        cin>>s;
        string r;
        for(int i=0;i<s.size();i++)
        {
            r.push_back(s[i]);
            int x=kmp(s,r);
            if(x!=0)
            {
                int y=s.size()/r.size();
                string t;
                for(int j=1;j<=y;j++)
                {
                 t=t+r;
                }
                if(t==s)
                {
                    break;
                }
            }
        }
        cout<<r.size()<<endl;
        if(tst)
            cout<<endl;
    }
    return 0;
}

