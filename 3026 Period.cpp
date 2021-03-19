#include<bits/stdc++.h>
using namespace std;
#define MAX 100000
int lps[MAX];
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
bool kmp(string text, string pattern)
{
    int n = text.size();
    int m = pattern.size();
    build_lps(pattern, m);

    int i = 0;

    int j = 0;

    while(true)
    {
        if(j == n)
        {
            return false;
        }

        if(text[j] == pattern[i])
        {
            i++;
            j++;
            if(i == m)
            {
                return true;
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
    return false;
}
int main()
{
    while(cin>>s&&s!=".")
    {
        build_lps(s,s.size());
        int cnt=0;
        for(int i=0;i<=s.size();i++)
        {
            if(lps[i]==0)
                cnt=i;
        }
        cout<<s.size()/cnt<<endl;
    }
    return 0;
}

