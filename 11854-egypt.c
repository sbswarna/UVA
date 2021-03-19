#include<stdio.h>
#include<math.h>
int main()
{
	long long int a,b,c,p,q,r,i,t;
	scanf("%lld",&t);
	i=1;
	while(i<=t)
	{
		scanf("%lld%lld%lld",&a,&b,&c);
		if(a!=0&&b!=0&&c!=0)
			{
					p=pow(a,2);
					q=pow(b,2);
					r=pow(c,2);
				if(p+q==r)
				{
					printf("Case %lld: yes\n",i);
				}
				else if(r+q==p)
				{
					printf("Case %lld: yes\n",i);
				}
				else if(p+r==q)
				{
					printf("Case %lld: yes\n",i);
				}
				else
				{
					printf("Case %lld: no\n",i);
				}
			}
		i++;
	}
	return 0;
}
