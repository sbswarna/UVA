#include<bits/stdc++.h>
using namespace std;
long long tst,c;
map<string,long long>mp;
string s;
int main()
{
    scanf("%lld\n",&tst);
    while(tst--)
    {
        mp.clear();
        c=0;
        while(1)
        {
            getline(cin,s);
            if( s[0]=='\0')
                break;
            c++;
            if(mp.find(s)==mp.end())
            {
                mp[s]=1;
            }
            else
            {
                mp[s]++;
            }
        }
        map<string,long long>::iterator it;
        for(it=mp.begin(); it!=mp.end(); it++)
        {
            double p=(((*it).second)*1.00)/(c*1.00);
            cout<<(*it).first<<" ";
            printf("%.4lf\n",p*100.00);
        }
        if(tst>0)
        {
            //mp.clear();
            cout<<endl;
        }
    }
    return 0;
}
/*#include<stdio.h>
#include<iostream>
#include<map>

using namespace std;
map<string,int>mp;

int main()
{
    int t,i,j,cnt;
    string x;

    scanf("%d\n",&t);
    //scanf("\n");
    while(t--)
    {
        mp.clear();
        cnt=0;
        while(1)
        {
            getline(cin,x);
            if(x[0]=='\0')
                break;
            mp[x]++;
            cnt++;

        }
        map<string,int>:: iterator it;
        for(it=mp.begin();it!=mp.end();it++)
        {
            cout<<it->first<<" ";
          //  printf("%d\n",it->second);
            printf("%.4lf\n",((double)it->second/cnt)*100.00);
        }
        if(t>0)
            printf("\n");
    }
    return 0;
}*/
