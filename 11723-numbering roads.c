#include<stdio.h>
int main()
{
	long long int a,b,i,p,q,r,ans;
	i=1;
	while(scanf("%lld%lld",&a,&b)==2)
	{
		if(a==0||b==0)
		{
			break;
		}
		else
		{
			if(a<b)
			{
				printf("Case %lld: 0\n",i);
			}
		else
		{
		p=a-b;
		q=p/b;
		r=p%b;
		if(q>26||q==26&&r>0)
		{
			printf("Case %lld: impossible\n",i);
		}
		else
		{
		if(r==0)
		{
			printf("Case %lld: %lld\n",i,q);
		}
		else
		{
			printf("Case %lld: %lld\n",i,q+1);
		}
		}
	}
	}
	i++;
	}
	return 0;
}
