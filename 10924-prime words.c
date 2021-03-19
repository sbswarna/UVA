#include<stdio.h>
#include<string.h>
int main()
{
	char word[30];
	int i,c,flag=0,j,l,s=0;
	while(gets(word))
	{
	s=0;
		l=strlen(word);
		if(l==0)
		{
			continue;
		}
		for(i=0;i<l;i++)
		{
			if(word[i]>='a'&&word[i]<='z')
			{
				c=(word[i]-'a')+1;
			}
			else if(word[i]>='A'&&word[i]<='Z')
			{
				{
				c=+(word[i]-'A')+27;
			}
			}
			s=s+c;
		}
	for(j=2;j<=s/2;j++)
	{
		if(s%j==0)
		{
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
		printf("It is not a prime word.\n");
	}
	else
	{
		printf("It is a prime word.\n");
	}	
	}
	return 0;
}
