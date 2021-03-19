#include<stdio.h>
#include<math.h>
int main()
{
	long long int p,n,i;
	double m;
	i=1;
	while(scanf("%lld",&p)==1)
	{
		if(p<=0)
		{
			break;
		}
		else
		{
			m=log(p)/log(2);
			n=log(p)/log(2);
			if(n==m)
			printf("Case %lld: %lld\n",i,n);
			else
			printf("Case %lld: %lld\n",i,n+1);	
		}
		i++;
	}
	return 0;
}
