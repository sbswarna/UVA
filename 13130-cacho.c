#include<stdio.h>
int main()
{
	long long int i,j,t,a[10],f;
	scanf("%lld",&t);
	j=1;
	while(j<=t)
	{
		f=0;
		for(i=0;i<5;i++)
		{
			scanf("%lld",&a[i]);
		}
		for(i=1;i<5;i++)
		{
			if(a[i]-a[i-1]!=1)
			{
				f=1;
				break;
			}
		}
		if(f==1)
		{
			printf("N\n");
		}
		else
		{
			printf("Y\n");
		}
		j++;
	}
	return  0;
}
