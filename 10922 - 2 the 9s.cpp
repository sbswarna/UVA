#include<bits/stdc++.h>
using namespace std;
char s[1005];
long long sum,i,l;
int main()
{
    while(cin.getline(s,1005))
    {
        if(strcmp(s,"0")==0)
            break;
        else
        {
            l=strlen(s);
            sum=0;
            for(i=0; i<l; i++)
            {
                sum=sum+(s[i]-'0');
            }
            //cout<<sum<<endl;
            if(sum%9==0)
            {
                long long d=sum,c=1,p;
                while(d>9)
                {
                    d=0;
                    for(i=1; i; i++)
                    {
                        p=sum%10;
                        sum=sum/10;
                        d=d+p;
                        if(sum==0)
                            break;
                    }
                    sum=d;
                    c++;
                }
                printf("%s is a multiple of 9 and has 9-degree %lld.\n",s,c);
            }
            else
            {
                printf("%s is not a multiple of 9.\n",s);
            }
        }
    }
    return 0;
}
