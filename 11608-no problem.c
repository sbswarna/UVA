#include<stdio.h>
int main()
{
	long long int a[100],b[100],i,n,j,f,s;
	i=1;
	while(scanf("%lld",&n)==1)
	{
		if(n<0)
		{
			break;
		}
		else
		{
			s=n;
			f=0;
			for(j=0;j<12;j++)
			{
				scanf("%lld",&a[j]);
			}
			for(j=0;j<12;j++)
			{
				scanf("%lld",&b[j]);
			}
			printf("Case %lld:\n",i);
			if(s>=b[0])
			{
				printf("No problem! :D\n");
				s=s-b[0];
			}
			else
			{
				printf("No problem. :(\n");
					
			}
		
			for(j=1;j<12;j++)
			{
				s=s+a[j-1];
				if(s>=b[j])
				{
				
					printf("No problem! :D\n");
					s=s-b[j];
					
				}
				else
				{
				
					printf("No problem. :(\n");
				}
				
			}	
		}
		i++;
	}
	return 0;
}
