#include<stdio.h>
#include<string.h>
long long int gcd(long long int a,long long int b)
{
	long long int c;

	while(a!=0)
	{
		c=b%a;
		b=a;
		a=c;
	}
	return b;
}
int main()
{
	long long int m,i,j,k,l,a[1000],t,p,sum,max,q;
	char s[1000];
	scanf("%lld",&t);
	getchar();
	m=1;
	while(m<=t)
	{
		gets(s);
		l=strlen(s);
		k=0;
		p=0;
		sum=0;
		max=0;
		for(i=0;i<l;i=i+p+1)
		{
			sum=0;
			p=0;
			for(j=i;j<l;j++)
			{
				if(s[j]>='0'&&s[j]<='9')
				{
					sum=sum*10+(s[j]-48);
					p++;
				}
				else
				{
					break;
				}
			}
			a[k]=sum;
			k++;

		}
		for(i=0;i<k;i++)
		{
			for(j=i+1;j<k;j++)
			{
				q=gcd(a[i],a[j]);
				if(q>=max)
				{
					max=q;
				}
			}
		}
		printf("%lld\n",max);
		m++;
	}
	return 0;
}
