#include<stdio.h>
#include<math.h>
int main()
{
	long long int a,b,i,j,p,c;
	while(scanf("%lld%lld",&a,&b)==2)
	{
		c=0;
		if(a>0&&b>0&&a<=100000&&b<=100000)
		{
		for(i=a;i<=b;i++)
		{
			p=pow(i,0.5);	
			if(p*p==i)
			{
				c++;
			}
		}
			printf("%lld\n",c);
	}
	else if(a==0&&b==0)
	{
		break;
	}
	}
	return 0;
}
