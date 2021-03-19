#include<stdio.h>
int main()
{
	long long int sum,p,q,i,l,r;
	char s[10000];
	while(gets(s))
	{
		r=0;
		sum=0;
		l=strlen(s);
		if(l==0)
		{
			continue;
		}
		else
		{
			if(strcmp(s,"0")==0)
			{
				break;
			}
		else
		{
			for(i=0;i<l;i=i+1)
			{
			sum=r*10+s[i]-48;
			r=sum%17;
			}
			if(r==0)
			{
				printf("1\n");
			}
			else
			{
				printf("0\n");
			}
		}
		}
	}	
	return 0;
}
