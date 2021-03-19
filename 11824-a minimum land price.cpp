#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	long long int m,t,i,a[100],k,f,s;
	scanf("%lld",&t);
	m=1;
	while(m<=t)
	{
		f=0;
		k=0;
		s=0;
		for(i=1;i;i++)
		{
			scanf("%lld",&a[k]);
			if(a[k]==0)
			{
				break;
			}
			k++;
		}
		sort(a,a+k);
		for(i=k-1;i>=0;i--)
		{
			s=s+(2*(pow(a[i],k-i)));
		}
		if(s>5000000)
		{
			printf("Too expensive\n");
		}
		else
		{
			printf("%lld\n",s);
		}
		m++;
	}
	return 0;
}
