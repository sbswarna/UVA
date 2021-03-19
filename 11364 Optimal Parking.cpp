#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	long long int a[1000],i,j,n,m,t,avg,s,d;
	scanf("%lld",&t);
	m=1;
	while(m<=t)
	{
		s=0;
		d=0;
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			s=s+a[i];
		}
		avg=(s)/n;
		sort(a,a+n);
		d=abs(avg-a[0]);
		for(i=1;i<n;i++)
		{
			d=d+abs(a[i]-a[i-1]);
		}
		d=d+abs(avg-a[n-1]);
		printf("%lld\n",d);
		m++;
	}
	return 0;
}

