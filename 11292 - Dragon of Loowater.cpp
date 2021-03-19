#include<iostream>
#include<algorithm>
long long int dragon[200000],knight[200000],i,j,m,n,coin,x;
using namespace std;
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
			coin=0;
			for(i=0;i<m;i++)
			{
				scanf("%lld",&dragon[i]);
			}
			for(i=0;i<n;i++)
			{
				scanf("%lld",&knight[i]);
			}
				sort(dragon,dragon+m);
				sort(knight,knight+n);
				x=m;
				for(i=0;i<m;i++)
				{
					for(j=0;j<n;j++)
					{
						if(knight[j]!=-1)
						{
						if(knight[j]>=dragon[i])
						{
							coin=coin+knight[j];
							knight[j]=-1;
							x--;
							break;
						}
					}
					}
				}
				if(x!=0)
				{
					printf("Loowater is doomed!\n");
				}
				else
				{
					printf("%lld\n",coin);
				}
			}
	}
	return 0;
}

