#include<bits/stdc++.h>
using namespace std;
#define MAX 100000
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
            // else go to the next best "candidate" partial match
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
   cin>>tst;
   while(tst--)
   {
       cin>>s;
       cin>>q;
       for(int i=1;i<=q;i++)
       {
           cin>>p;
           if(kmp(s,p))
            cout<<"y"<<endl;
           else
            cout<<"n"<<endl;
       }
   }
    return 0;
}

