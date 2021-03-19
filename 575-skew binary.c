#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	char s[100010];
	long long int i,l,sum=0,t;
	while(gets(s))
	{
	if(strcmp(s,"0")==0)
	{
		break;
	}
	l=strlen(s);
	for(i=l-1;i>=0;i--)
	{
		t=((s[i]-'0')*(pow(2,l-i)-1));
		sum=sum+t;
	}
	printf("%lld\n",sum);
	sum=0;
}
return 0;
}
