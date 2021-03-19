#include<stdio.h>
int main()
{
	long int t,i,n,a,p,q,b;
	char s[10];
	scanf("%ld",&t);
	i=1;
	while(i<=t)
	{
		scanf("%s",s);
		a=(26*26*(s[0]-65))+(26*(s[1]-65))+(s[2]-65);
		b=(((s[4]-48)*1000)+((s[5]-48)*100)+((s[6]-48)*10)+((s[7]-48)*1));
		q=abs(a-b);
			if(q<=100)
			{
				printf("nice\n");
			}
			else
			{
				printf("not nice\n");
			}
	i++;	
	}
	return 0;
}
