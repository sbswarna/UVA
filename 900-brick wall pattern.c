#include<stdio.h>
int main()
{
    long long int n,i,a,b,c;
    while(scanf("%lld",&n))
    {
        if(n==0)
        {
            break;
        }
        else if(n<=50)
        {
            a=0;
            b=1;
            c=a+b;
            for(i=0; i<n-1; i++)
            {
                a=b;
                b=c;
                c=a+b;
            }
            printf("%lld\n",c);
        }
    }
    return 0;
}
