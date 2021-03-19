#include<bits/stdc++.h>
using namespace std;
long long n,i,result1[102],result5[102],result10[102],result50[102],result100[102];
void roman()
{
    for(int n=1; n<=100; n++)
    {
        if(n<5)
        {
            if(n%5==4)
            {
                result1[n]=result1[n-1]+1;
                result5[n]=result5[n-1]+1;
                result10[n]=result10[n-1];
                result50[n]=result50[n-1];
                result100[n]=result100[n-1];
            }
            else
            {
                result1[n]=result1[n-1]+(n%5);
                result5[n]=result5[n-1];
                result10[n]=result10[n-1];
                result50[n]=result50[n-1];
                result100[n]=result100[n-1];
            }
        }
        else if(n>=5&&n<10)
        {
            if(n%5==0)
            {
                result1[n]=result1[n-1];
                result5[n]=result5[n-1]+1;
                result10[n]=result10[n-1];
                result50[n]=result50[n-1];
                result100[n]=result100[n-1];
            }
            else if(n%5==4)
            {
                result1[n]=result1[n-1]+1;
                result5[n]=result5[n-1];
                result10[n]=result10[n-1]+1;
                result50[n]=result50[n-1];
                result100[n]=result100[n-1];
            }
            else
            {
                result1[n]=result1[n-1]+(n%5);
                result5[n]=result5[n-1]+1;
                result10[n]=result10[n-1];
                result50[n]=result50[n-1];
                result100[n]=result100[n-1];
            }
        }
        else if(n>=10&&n<=39)
        {

            if(n%10==0)
            {
                result1[n]=result1[n-1];
                result5[n]=result5[n-1];
                result10[n]=result10[n-1]+(n/10);
                result50[n]=result50[n-1];
                result100[n]=result100[n-1];
            }
            else if(n%10>=1&&n%10<4)
            {
                result1[n]=result1[n-1]+(n%10);
                result5[n]=result5[n-1];
                result10[n]=result10[n-1]+(n/10);
                result50[n]=result50[n-1];
                result100[n]=result100[n-1];
            }
            else if(n%10==4)
            {
                result1[n]=result1[n-1]+1;
                result5[n]=result5[n-1]+1;
                result10[n]=result10[n-1]+(n/10);
                result50[n]=result50[n-1];
                result100[n]=result100[n-1];
            }
            else if(n%10==5)
            {
                result1[n]=result1[n-1];
                result5[n]=result5[n-1]+1;
                result10[n]=result10[n-1]+(n/10);
                result50[n]=result50[n-1];
                result100[n]=result100[n-1];
            }
            else if(n%10>5&&n%10<9)
            {
                result1[n]=result1[n-1]+((n%10)-5);
                result5[n]=result5[n-1]+1;
                result10[n]=result10[n-1]+(n/10);
                result50[n]=result50[n-1];
                result100[n]=result100[n-1];
            }
            else
            {
                result1[n]=result1[n-1]+1;
                result5[n]=result5[n-1];
                result10[n]=result10[n-1]+(n/10)+1;
                result50[n]=result50[n-1];
                result100[n]=result100[n-1];
            }
        }
        else if(n>=40&&n<=50)
        {
            if(n==50)
            {
                result1[n]=result1[n-1];
                result5[n]=result5[n-1];
                result10[n]=result10[n-1];
                result50[n]=result50[n-1]+1;
                result100[n]=result100[n-1];
            }
            else
            {
                if(n==40)
                {
                    result1[n]=result1[n-1];
                    result5[n]=result5[n-1];
                    result10[n]=result10[n-1]+1;
                    result50[n]=result50[n-1]+1;
                    result100[n]=result100[n-1];
                }
                else if(n>=41&&n<=43)
                {
                    result1[n]=result1[n-1]+(n%10);
                    result5[n]=result5[n-1];
                    result10[n]=result10[n-1]+1;
                    result50[n]=result50[n-1]+1;
                    result100[n]=result100[n-1];
                }
                else if(n==44)
                {
                    result1[n]=result1[n-1]+1;
                    result5[n]=result5[n-1]+1;
                    result10[n]=result10[n-1]+1;
                    result50[n]=result50[n-1]+1;
                    result100[n]=result100[n-1];
                }
                else if(n>=45&&n<=48)
                {
                    result1[n]=result1[n-1]+(n%10)-5;
                    result5[n]=result5[n-1]+1;
                    result10[n]=result10[n-1]+1;
                    result50[n]=result50[n-1]+1;
                    result100[n]=result100[n-1];
                }
                else if(n==49)
                {
                    result1[n]=result1[n-1]+1;
                    result5[n]=result5[n-1];
                    result10[n]=result10[n-1]+2;
                    result50[n]=result50[n-1]+1;
                    result100[n]=result100[n-1];
                }
            }
        }
        else if(n>50&&n<=89)
        {
            if(n%10==0)
            {
                if(n%50==0)
                {
                    result1[n]=result1[n-1];
                    result5[n]=result5[n-1];
                    result10[n]=result10[n-1];
                    result50[n]=result50[n-1]+1;
                    result100[n]=result100[n-1];
                }
                else
                {
                    result1[n]=result1[n-1];
                    result5[n]=result5[n-1];
                    result10[n]=result10[n-1]+(n/10)-5;
                    result50[n]=result50[n-1]+1;
                    result100[n]=result100[n-1];
                }
            }
            else if((n%50)%10>=1&&(n%50)%10<4)
            {
                result1[n]=result1[n-1]+((n%50)%10);
                result5[n]=result5[n-1];
                result10[n]=result10[n-1]+((n%50)/10);
                result50[n]=result50[n-1]+1;
                result100[n]=result100[n-1];
            }
            else if((n%50)%10==4)
            {
                result1[n]=result1[n-1]+1;
                result5[n]=result5[n-1]+1;
                result10[n]=result10[n-1]+((n%50)/10);
                result50[n]=result50[n-1]+1;
                result100[n]=result100[n-1];
            }
            else if((n%50)%10==5)
            {
                result1[n]=result1[n-1];
                result5[n]=result5[n-1]+1;
                result10[n]=result10[n-1]+((n%50)/10);
                result50[n]=result50[n-1]+1;
                result100[n]=result100[n-1];
            }
            else if((n%50)%10>5&&(n%50)%10<9)
            {
                result1[n]=result1[n-1]+(((n%50)%10)-5);
                result5[n]=result5[n-1]+1;
                result10[n]=result10[n-1]+((n%50)/10);
                result50[n]=result50[n-1]+1;
                result100[n]=result100[n-1];
            }
            else
            {
                result1[n]=result1[n-1]+1;
                result5[n]=result5[n-1];
                result10[n]=result10[n-1]+((n%50)/10)+1;
                result50[n]=result50[n-1]+1;
                result100[n]=result100[n-1];
            }
        }
        else if(n>89&&n<=99)
        {
            if(n==90)
            {
                result1[n]=result1[n-1];
                result5[n]=result5[n-1];
                result10[n]=result10[n-1]+1;
                result50[n]=result50[n-1];
                result100[n]=result100[n-1]+1;
            }
            else if(n>=91&&n<=93)
            {
                result1[n]=result1[n-1]+(n%10);
                result5[n]=result5[n-1];
                result10[n]=result10[n-1]+1;
                result50[n]=result50[n-1];
                result100[n]=result100[n-1]+1;
            }
            else if(n==94)
            {
                result1[n]=result1[n-1]+1;
                result5[n]=result5[n-1]+1;
                result10[n]=result10[n-1]+1;
                result50[n]=result50[n-1];
                result100[n]=result100[n-1]+1;
            }
            else if(n>=95&&n<=98)
            {
                result1[n]=result1[n-1]+((n%10)-5);
                result5[n]=result5[n-1]+1;
                result10[n]=result10[n-1]+1;
                result50[n]=result50[n-1];
                result100[n]=result100[n-1]+1;
            }
            else if(n==99)
            {
                result1[n]=result1[n-1]+1;
                result5[n]=result5[n-1];
                result10[n]=result10[n-1]+2;
                result50[n]=result50[n-1];
                result100[n]=result100[n-1]+1;
            }
        }
        else
        {
            result1[n]=result1[n-1];
            result5[n]=result5[n-1];
            result10[n]=result10[n-1];
            result50[n]=result50[n-1];
            result100[n]=result100[n-1]+1;
        }
    }
}
int main()
{
    roman();
    while(scanf("%lld",&i)==1)
    {
        if(i==0)
            break;
        else
        {
            cout<<i<<": "<<result1[i]<<" i, "<<result5[i]<<" v, "<<result10[i]<<" x, " <<result50[i]<<" l, " <<result100[i]<<" c"<<endl;
        }
    }
    return 0;
}
