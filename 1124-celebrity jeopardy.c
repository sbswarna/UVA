#include<stdio.h>
#include<string.h>
int main()
{
	char s[100000];
	int i,n;
	while(gets(s))
	{
		n=strlen(s);
		for(i=0;i<n;i++)
		{
			printf("%c",s[i]);
		}
			printf("\n");
	}

	return 0;
}
