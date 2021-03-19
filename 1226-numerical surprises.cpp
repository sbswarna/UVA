#include<stdio.h>
#include<string.h>
int main()
{
	long long int t,m,b,a,p,i,l;
	char s[100000];
	scanf("%lld",&t);
	getchar();
	m=1;
	while(m<=t)
	{
		scanf("%lld",&p);
		scanf("%s",s);
		l=strlen(s);
		b=0;
		a=0;
		for(i=0;i<l;i++)
		{
			a=b*10+s[i]-48;
			b=a%p;
		}
		printf("%lld\n",b);
		m++;
	}
	return 0;
}
