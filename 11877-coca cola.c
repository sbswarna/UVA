#include<stdio.h>
int main()
{
	int n,p,m,i,j,sum;
	i=1;
	while(i<=10)
	{
		scanf("%d",&n);
		sum=n;
		if(n==0)
		{
			break;
		}
		else
		{
			for(j=1;j;j++)
			{
				p=n/3;
				m=n%3;
				if(p==0)
				{
					if(m==2)
					{
						m=m+1;
					}
					else if(m==1)
					{
						m=m+2;
					}
				}
				sum=sum+p;
				n=p+m;
				if(p==1&&m==0)
				{
					break;
				}
			}
			printf("%d\n",sum);
			sum=0;
		}
		i++;
	}
	return 0;
}
