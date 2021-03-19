#include<stdio.h>
#include<string.h>
int main()
{
	long long int k,a[30],i,t,l,flag,n;
	char s[900];
	scanf("%lld",&t);
	i=1;
	while(i<=t)
	{
		scanf("%s",s);
		l=strlen(s);
		flag=0;
		long long int a[30]={0};
		for(k=0;k<l;k++)
		{
			if(s[k]=='M')
			{
				a[0]++;
			}
			else if(s[k]=='A')
			{
				a[1]++;
			}
			else if(s[k]=='R')
			{
				a[2]++;
			}
			else if(s[k]=='G')
			{
				a[3]++;
			}
			else if(s[k]=='I')
			{
				a[4]++;
			}
			else if(s[k]=='T')
			{
				a[5]++;
			}
			
		}
		for(k=a[0];k>=1;k--)
		{
			if(a[1]>=3*k&&a[2]>=k*2&&a[3]>=k&&a[4]>=k&&a[5]>=k)
			{
				n=k;
				flag=1;
				break;
			}
			else
			{
				flag=0;
			}
	}
				if(flag==1)
		{
			printf("%lld\n",n);
		}
		else
		{
			printf("0\n");
		}
		i++;
	}
	return 0;
}
