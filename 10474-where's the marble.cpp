#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long int a[10008],b[10003],i,j,n,q,k,f;
	j=1;
	while(scanf("%lld%lld",&n,&q)==2)
	{
		if(n==0&&q==0)
		{
			break;
		}
		else
		{
			f=0;
		for(k=0;k<n;k++)
		{
			scanf("%lld",&a[k]);
		}
			for(i=0;i<q;i++)
		{
			scanf("%lld",&b[i]);
		}
		sort(a,a+n);
		printf("CASE# %lld:\n",j);
		for(i=0;i<q;i++)
		{
			f=0;
			for(k=0;k<n;k++)
			{
				if(a[k]==b[i])
				{
					f=1;
					break;
				}
			else
			{
				f=0;
			}
		}
			if(f==1)
			{
				printf("%lld found at %lld\n",b[i],k+1);
			}
			else
			{
				printf("%lld not found\n",b[i]);
			}
		}
	}
	j++;	
	}
	return 0;
}
