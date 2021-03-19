#include<stdio.h>
#include<string.h>
int main()
{
	long int i,t,j,c,s,l;
	char p[500];
	scanf("%ld",&t);
	i=1;
	while(i<=t)
	{
		c=0;
		s=0;
		gets(p);
		l=strlen(p);
		if(l==0)
		{
			continue;
		}
		else
		{
			for(j=0;j<l;j++)
			{
				if(p[j]=='O')
				{
					c++;
					s=s+c;
				}
				else
				{
					c=0;
				}
			}
			printf("%ld\n",s);
		}
		i++;
	}
	return 0;
}
