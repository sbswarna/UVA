#include<stdio.h>
long long int n,m,i,j,mid,high,c,p,q,low,a[1000000],b[1000000];

int main()
{
	while(scanf("%lld%lld",&m,&n)==2)
	{
		if(m==0&&n==0)
		{
			break;
		}
		else
		{
		c=0;
		for(i=0;i<m;i++)
		{
			scanf("%lld",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			scanf("%lld",&b[i]);
		}
		
		for(i=0;i<m;i=i+1)
		{
			low=0;
			high=n;
			while(low<=high)
			{
				mid=(low+high)/2;
				if(a[i]<b[mid])
				{
					high=mid-1;
				}
				else if(a[i]>b[mid])
				{
					low=mid+1;
				}
				else
				{
					c++;
					break;
				}
			}
		}
		printf("%lld\n",c);
	}
	}
	return 0;
}
