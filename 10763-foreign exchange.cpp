#include<iostream>
#include<algorithm>
	long long int a[500004],b[500004],i,j,n;

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
			j=0;
			for(i=0;i<n;i++)
			{
				scanf("%lld%lld",&a[i],&b[i]);
			}
			sort(a,a+n);
			sort(b,b+n);
			for(i=0;i<n;i++)
			{
				if(a[i]!=b[i])
				{
					j=1;
					break;
				}
			}
			if(j==1)
			{
				printf("NO\n");
			}
			else
			{
				printf("YES\n");
			}
		}
	}
	return 0;
}
