#include<iostream>
#include<algorithm>
#include<cmath>
long long int a[1100],b[100],c[1001000],i,j,k,m,n,p,x,t;
using namespace std;
int main()
{
	long long min;
	t=1;
	while(scanf("%lld",&m)==1)
	{
		if(m==0)
		{
			break;
		}
		else
		{
			min=9999999999;
			for(i=0;i<m;i++)
			{
				scanf("%lld",&a[i]);
			}
			scanf("%lld",&n);
			for(i=0;i<n;i++)
			{
				scanf("%lld",&b[i]);
			}
			k=0;
			for(i=0;i<m;i++)
			{
				for(j=i+1;j<m;j++)
				{
					p=a[i]+a[j];
					c[k]=p;
					k++;
				}
				
			}
		sort(c,c+k);
	printf("Case %lld:\n",t);
		for(i=0;i<n;i++)
		{
			min=99999999999;
			for(j=0;j<k;j++)
			{
				if(abs(b[i]-c[j])<=min)
				{
					min=abs(b[i]-c[j]);
					x=c[j];
				}
			}
			printf("Closest sum to %lld is %lld.\n",b[i],x);
		}
		}
		t++;
	}
	return 0;
}
