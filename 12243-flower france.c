#include<stdio.h>
#include<string.h>
int main()
{
	long long int i,l,flag,j;
	char s[100003];
	while(gets(s))
	{
		l=strlen(s);
		if(l==0)
		{
			continue;
		}
		else
		{
			flag=0;
			if(strcmp(s,"*")==0)
			{
				break;
			}
			else
			{
				for(i=0;i<l;i++)
				{
					if(s[i]==' ')
					{
						if(s[i+1]==s[0]||s[i+1]-65+97==s[0]||s[i+1]+65-97==s[0])
						{
							flag=0;
						}
						else
						{
							flag=1;
						}
					}
					if(flag==1)
					{
						break;
					}
				}
				if(flag==1)
				{
					printf("N\n");
				}
				else
				{
					printf("Y\n");
				}
			}
		}
	}
	return 0;
}
