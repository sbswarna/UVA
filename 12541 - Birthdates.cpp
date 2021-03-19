#include<bits/stdc++.h>
using namespace std;
string s[105];
long long n,p,d,i,m,y;
priority_queue<pair<long long,string> >pq1,pq2;
int main()
{
    while(scanf("%lld",&n)==1)
    {
        for(i=0;i<n;i++)
        {
            cin>>s[i]>>d>>m>>y;
            if(y%400==0)
            {
                y=y*366;
            }
            else
            {
                y=y*365;
            }
            if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
            {
                m=m*31;
            }
            else if(y%400==0&&m==2)
            {
                m=m*29;
            }
            else if(y%400!=0&&m==2)
            {
                m=m*28;
            }
            else
            {
                m=m*30;
            }
            p=d+m+y;
            pq1.push(make_pair(p,s[i]));
            pq2.push(make_pair(p*-1,s[i]));
        }
        cout<<pq1.top().second<<endl<<pq2.top().second<<endl;
    }
    return 0;
}
