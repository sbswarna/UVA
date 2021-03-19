#include<stdio.h>
#include<string.h>
int main()
{
	long long int i,j,l,c,k,t,g,m;
	char s[60000],s1[400];
	
	scanf("%lld",&t);
	i=1;
	while(i<=t)
	{
		c=0;
		g=0;
		m=0;
		gets(s);
		l=strlen(s);
		if(l==0)
		{
			continue;
		}
		else
		{
			for(j=l-1;j>=0;j--)
			{
				if(s[j]>='0'&&s[j]<='9')
				{
					c=c+((s[j]-48)*pow(10,m));
					m++;
				}
				else
				{
					for(k=1;k<=c;k++)
					{
						s1[g]=s[j];
						g++;	
					}
					c=0;
					m=0;
				}
			}
			printf("Case %lld: ",i);
			for(k=g-1;k>=0;k--)
			{
				printf("%c",s1[k]);
			}
			printf("\n");
		}
		i++;
	}
	return 0;
}
