#include<stdio.h>
#include<string.h>
int main()
{
	char s[10];
	int i,t,n;
	scanf("%d",&t);
	i=1;
while(i<=t)
	{
		gets(s);
		n=strlen(s);
		if(n==0)
		{
			continue;
		}
		else if(n==3)
		{
			if(s[0]=='o'&&s[2]=='e'||s[1]=='n'&&s[2]=='e'||s[0]=='o'&&s[1]=='n')
			{
				printf("1\n");
			}
			else if(s[0]=='t'&&s[2]=='o'||s[1]=='w'&&s[2]=='o'||s[0]=='t'&&s[1]=='w')
			{
				printf("2\n");
			}	
		}
		else if(n==5)
		{
			if(s[0]=='t'&&s[1]=='h'&&s[3]=='e'&&s[4]=='e'||s[0]=='t'&&s[2]=='r'&&s[3]=='e'&&s[4]=='e'||s[0]=='t'&&s[1]=='h'&&s[2]=='r'&&s[4]=='e'||s[0]=='t'&&s[1]=='h'&&s[2]=='r'&&s[3]=='e'||s[1]=='h'&&s[2]=='r'&&s[3]=='e'&&s[4]=='e')
			{
				printf("3\n");
			}	
		}
		i++;
	}
	return 0;
}
