#include<stdio.h>
#include<string.h>
int main()
{
	long int i,j,n,t,a,d,c,b;
	char s[100];
	scanf("%ld",&t);
	i=1;
	while(i<=t)
	{
		scanf("%ld",&n);
		a=0;
		c=0;
		d=0;
		b=0;	
		gets(s);
		if(strlen(s)==0)
		{
			continue;
		}
		else
		{
		for(j=0;j<n;j++)
		{
			if(s[j]=='B')
			{
				c++;
			}
			else if(s[j]=='W')
			{
				d++;
			}
			else if(s[j]=='A')
			{
				a++;
			}
			else if(s[j]=='T')
			{
				b++;
			}
		}
		if(d==0&&a==0&&b==0&&c>0)
		{
			printf("Case %ld: BANGLAWASH\n",i);
		}
		else if(d>0&&a==0&&b==0&&c==0)
		{
			printf("Case %ld: WHITEWASH\n",i);
		}
		else if(d>c)
		{
			printf("Case %ld: WWW %ld - %ld\n",i,d,c);
		}
		else if(d<c)
		{
			printf("Case %ld: BANGLADESH %ld - %ld\n",i,c,d);
		}
		else if(d==c&&d!=0&&c!=0||b!=0)
		{
			printf("Case %ld: DRAW %ld %ld\n",i,c,b);
		}
		else if(a>0&&d==0&&c==0&&b==0)
		{
			printf("Case %ld: ABANDONED\n",i);
		}
	}
		i++;
	}
	return 0;
}
