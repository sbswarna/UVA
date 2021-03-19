#include<stdio.h>
int main()
{
	long long int a,b,c,d,l,i,count=0,ans;
	while(scanf("%lld%lld%lld%lld%lld",&a,&b,&c,&d,&l)==5)
	{
		if(a==0&&b==0&&c==0&&d==0&&l==0)
		{
			break;
		}
		else
		{
			for(i=0;i<=l;i++)
			{
				ans=(a*i*i)+(b*i)+c;
				if(ans%d==0)
				{
				count++;	
				}
			}
			printf("%lld\n",count);
			count=0;			
			}
		}
		return 0;
}
