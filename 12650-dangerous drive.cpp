#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long int m,n,a[10005],i,b[10005];
	while(scanf("%lld%lld",&m,&n)==2)
	{
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
	}
		if(m==n)
		{
			printf("*\n");
		}
		else
		{
			sort(a,a+n);
			for(i=0;i<m;i++)
			{
				b[i]=0;
			}
			for(i=0;i<n;i++)
			{
				if(a[i]!=i+1)
				{
					b[a[i]-1]=a[i];
					
				}
				else if(a[i]==i+1)
				{
					b[i]=i+1;
				}
			}
			for(i=0;i<m;i++)
			{
				if(b[i]==0)
				{
					printf("%lld ",i+1);
				}
			}
			printf("\n");
		}
	}
	return 0;
}
