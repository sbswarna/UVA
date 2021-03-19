#include<stdio.h>
#include<string.h>
int main()
{
	char s[10000];
	long int i,n;
	while(gets(s))
	{
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		printf("%c",s[i]-7);
	}
	printf("\n");
}
return 0;
}
