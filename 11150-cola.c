#include<stdio.h>
int main()
{
	long int n,p,m,sum;
	while(scanf("%ld",&n)==1)
	{
		if(n<=200&&n>=0)
		{
		sum=n;
		while(n>2)
			{
				m=n%3;
				p=n/3;
				sum=sum+p;
				n=p+m;
}
		if(n==2)
		{
			sum=sum+1;
		}
			printf("%ld\n",sum);
	}
}
	return 0;
}
	
