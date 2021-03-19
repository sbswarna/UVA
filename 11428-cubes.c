#include<stdio.h>
#include<math.h>
int main()
{
	long long int a,x,y,i,j,flag;
	while(scanf("%lld",&a)==1)
	{
		flag=0;
	if(a==0)
	{
		break;
		}	
		else
		{
		for(i=1;i<=sqrt(a);i++)
		{
			for(j=1;j<=sqrt(a);j++)
			{
				if(pow(j,3)-pow(i,3)==a)
				{
					x=i;
					y=j;
					flag=1;
					break;
				}
				else
				{
					flag=0;
				}
			}
			if(flag==1)
			{
				break;
			}
		}
		if(flag==1)
		{
			printf("%lld %lld\n",y,x);
		}
		else
		{
			printf("No solution\n");
		}
	}
}
	return 0;
}
