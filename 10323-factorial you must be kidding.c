#include<stdio.h>
int main()
{
    long long int n,j,p;
    while(scanf("%lld",&n)==1)
    {
    	p=1;
        if(n<=999999)
        {
            if(n>13)
            {
                printf("Overflow!\n");
            }
            else if(n<0)
            {
           	if(n%2==0)
            {
            	printf("Underflow!\n");
			}
			else if(n%2!=0)
            {
            	printf("Overflow!\n");
			}
		}
            else if(n<=7&&n>=0)
            {
                printf("Underflow!\n");
            }
            else
            {
            	for(j=1; j<=n; j++)
            {
                p=p*j;
            }
                printf("%lld\n",p);
            }
        }
    }
    return 0;
}
