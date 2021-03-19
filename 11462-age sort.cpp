#include<iostream>
#include<algorithm>
long long int a[2000005],i,n;
using namespace std;
int main()
{
	while(scanf("%lld",&n)==1)
	{
		if(n==0)
		{
			break;
		}
		else
		{
			for(i=0;i<n;i++)
			{
				scanf("%lld",&a[i]);
			}
			sort(a,a+n);
			for(i=0;i<n;i++)
			{
				printf("%lld ",a[i]);
			}
			printf("\n");
		}
	}
	return 0;
}
