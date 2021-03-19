#include<stdio.h>
#include<string.h>
	char s[10000000];
int main()
{
	long long int l,i,j,p;
	while(gets(s))
	{
		l=strlen(s);
	p=0;
                for(i=0;i<l;i=i+p+1)
		{
		;
			p=0;
			if(s[i]>='A'&&s[i]<='Z'||s[i]>='a'&&s[i]<='z')
			{
			if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U')
				{
				printf("%c",s[i]);
			for(j=i+1;j<l;j++)
			{
			if(s[j]>='A'&&s[j]<='Z'||s[j]>='a'&&s[j]<='z')
				{
				printf("%c",s[j]);
				p++;
			}
				else
				{	
					break;
				}
		}
		printf("ay");
		}

			else
			{
					for(j=i+1;j<l;j++)
			{
			if(s[j]>='A'&&s[j]<='Z'||s[j]>='a'&&s[j]<='z')
				{
				printf("%c",s[j]);
				p++;
			}
				else
				{
					break;
				}
		}
		printf("%cay",s[i]);
			}
		
		}
		else 
		{
			p=0;
		printf("%c",s[i]);
		}
		}
		printf("\n");
	}

	return 0;
}
