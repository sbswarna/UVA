#include<stdio.h>
#include<string.h>
int main()
{
	char s[30];
	long long int j,i,t,sum=0,l,x;
	scanf("%lld",&t);
	j=1;
	while(j<=t)
	{
	scanf("%s",s);
	if(strcmp(s,"donate")==0)
		{
			scanf("%lld",&x);
			sum=sum+x;
		}
		else
		{
			printf("%lld\n",sum);
		}
		j++;
		}
		return 0;
}
