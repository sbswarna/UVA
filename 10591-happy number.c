#include<stdio.h>
int main()
{
	long long int n,i,p,d,sum,t,j,x;
	scanf("%lld",&t);
	j=1;
	while(j<=t)
	{
	scanf("%lld",&n);
	x=n;
	sum=0;
    for(i=1;i;i++)
    {
    	p=n%10;
    	d=n/10;
    	n=d;
    	sum=sum+(p*p);
    	if(d==0&&sum!=4&&sum!=1)
    	{
    			n=sum;
    			sum=0;
    		}
		else if(d==0&&sum==1)
			{
				printf("Case #%lld: %lld is a Happy number.\n",j,x);
				break;
			}
			else if(d==0&&sum==4)
			{
				printf("Case #%lld: %lld is an Unhappy number.\n",j,x);
				break;
			}
		}
	j++;
}
		return 0;
	}
