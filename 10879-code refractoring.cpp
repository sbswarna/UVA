#include<stdio.h>
#include<math.h>
int main()
{
	long long int t,k,i,n,a,p,b,c,d,q,r,s[100000];
	scanf("%lld",&t);
	k=1;
	while(k<=t)
	{
		r=0;
		scanf("%lld",&n);
		for(i=2;i<sqrt(n);i++)
		{
			if(n%i==0)
			{
				s[r]=i;
				r++;
			}
			if(r==2)
			{
				break;
			}
		}
		printf("Case #%lld: %lld = %lld * %lld = %lld * %lld\n",k,n,s[r-1],n/s[r-1],s[r-2],n/s[r-2]);
		k++;
	}
	return 0;
}
