#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	long long int i,t,j,k,a[50],b[50],f,flag;
	scanf("%lld",&t);
	printf("Lumberjacks:\n");
	j=1;
	while(j<=t)
	{
		f=0;
		flag=0;
		for(i=0;i<10;i++)
		{
			scanf("%lld",&a[i]);
		}
		for(i=0;i<10;i++)
		{
			b[i]=a[i];
		}
		sort(a,a+10);
		for(i=0;i<10;i++)
		{
			if(a[i]==b[i])
			{
				flag=0;
			}
			else
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			printf("Ordered\n");
		}
		else
		{
			for(i=9,k=0;i>=0,k<10;i--,k++)
			{
					if(b[k]==a[i])
					{
						f=0;
					}
					else
					{
						f=1;
						break;
					}
				}
			if(f==0)
			{
				printf("Ordered\n");
			}
			else
			{
				printf("Unordered\n");
			}
		}
		j++;
	}
	return 0;
}
