#include<stdio.h>
#include<string.h>
int main()
{
	char s[1000];
	long long int t,i,j,l;
	scanf("%lld",&t);
	j=1;
	while(j<=t)
	{
	gets(s);
		l=strlen(s);
		if(l==0)
		{
			continue;
		}
		else
		{
		for(i=0;s[i]!='\0';i++)
		{
			if(s[i]=='0')
			{
				s[i]='O';	
			}
			else if(s[i]=='1')
			{
				s[i]='I';	
			}
			else if(s[i]=='2')
			{
				s[i]='Z';	
			}
			else if(s[i]=='3')
			{
				s[i]='E';	
			}
			else if(s[i]=='4')
			{
				s[i]='A';	
			}
			else if(s[i]=='5')
			{
				s[i]='S';	
			}
			else if(s[i]=='6')
			{
				s[i]='G';	
			}
			else if(s[i]=='7')
			{
				s[i]='T';	
			}
			else if(s[i]=='8')
			{
				s[i]='B';	
			}
			else if(s[i]=='9')
			{
				s[i]='P';	
			}
			else
			{
				s[i]=s[i];
			}
			printf("%c",s[i]);
	}
		printf("\n");
	}
	if(j!=t)
	{
		printf("\n");
	}
		j++;
}
	return 0;
}
