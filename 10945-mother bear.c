#include<stdio.h>
#include<string.h>
int main()
{
	long long int b,i,j,t,l,flag,k;
	char s[999999],a[999999];
	while(gets(s)!=EOF)
	{
		l=strlen(s);
		if(l==0)
		{
			continue;
		}
		
	else
	{
	if(strcmp(s,"DONE")==0)
		{
			break;
		}
		else
		{
			b=0;
			flag=0;
			
			for(i=0;i<l;i++)
			{
				if(s[i]>='A'&&s[i]<='Z'||s[i]>='a'&&s[i]<='z')
				{
					a[b]=s[i];
					b++;
				}
			}
			for(i=0,j=b-1;i<b,j>=0;i++,j--)
			{
				if(a[i]-64==a[j]-96||a[i]-96==a[j]-64||a[i]==a[j])
				{
					flag=0;
				}
				else
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				printf("You won't be eaten!\n");
			}
			else
			{
				printf("Uh oh..\n");
			}
		}
	}
	}
	return 0;
}
