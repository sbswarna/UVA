#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long int b,s,c[10005],d[10005],i,j,k;
	k=1;
	while(scanf("%lld%lld",&b,&s)==2)
	{
		if(b==0&&s==0)
		{
			break;
		}
		else
		{
		for(i=0;i<b;i++)
		{
			scanf("%lld",&c[i]);
		}
		for(j=0;j<s;j++)
		{
			scanf("%lld",&d[i]);
		}
		sort(c,c+b);
		if(b<=s)
		{
			printf("Case %lld: 0\n",k);
		}
		else
		{
			printf("Case %lld: %lld %lld\n",k,b-s,c[0]);
		}
	}
	k++;
	}
	return 0;
}
