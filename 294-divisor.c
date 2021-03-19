#include<stdio.h>
#include<math.h>
int main()
{
	long long int u,l,i,j,c=0,max=0,t,o,k;
	scanf("%lld",&o);
	k=1;
	while(k<=o)
	{
	scanf("%lld%lld",&l,&u);
	{
		c=0;
		max=0;
		for(i=u;i>=l;i--)
		{
			for(j=1;j<=sqrt(i);j++)
			{
				if(i%j==0)
				{
				    if(j!=i/j)
					c=c+2;
					else
                        c++;
				}
			}

			if(c>=max)
			{
				max=c;
				t=i;
			}
			c=0;
		}
		printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",l,u,t,max);
	}
	k++;
}
return 0;
}
