#include<stdio.h>
long long int altr(long long int a)
{
	long long int s,f,i,j,t;
s=0;
			f=0;
			for(i=a-1;i>=1;i--)
			{
				s=0;
				for(j=1;j<=sqrt(i);j++)
				{
					if(j!=i/j)
					{
					if(i%j==0)
					{
						s=s+j+(i/j);
					}
				}
				else
				{
					if(i%j==0)
					s=s+i/j;
				}
				}
				if(s==a)
				{
					t=i;
					f=1;
					break;
				}
				else
				{
					f=0;
				}
			}
			if(f==0)
			{
				return -1;
			}
			else
			{
				return t;
			}
		}
int main()
{
	long long int n,k,b;
	k=1;
	while(scanf("%lld",&n)==1)
	{
		if(n==0)
		{
			break;
		}
		else
		{
			if(n==1)
			{
				printf("Case %lld: 1\n",k);
			}
			else
			{
				b=altr(n);
				if(b==-1)
				printf("Case %lld: -1\n",k);
				else
				printf("Case %lld: %lld\n",k,b);


		}
		}
	
		k++;
	}
	return 0;
}
