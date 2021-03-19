#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long int a,n,m,ara[100002],s,c,i,k,j,temp;
	scanf("%lld",&a);
	k=1;
	while(k<=a)
	{
		s=0;
		c=0;
		scanf("%lld%lld",&m,&n);
		for(i=0;i<m;i++)
		{
			scanf("%lld",&ara[i]);
		}
	sort(ara,ara+m);
		for(i=0;i<m;i++)
		{
			s=s+ara[i];
			if(s>n)
			{
				break;
			}
			c++;
		}
		printf("%lld\n",c);
		k++;
	}
	return 0;
}
