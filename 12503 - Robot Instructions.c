#include<stdio.h>
#include<string.h>
int main()
{
	long long int a[10000],i,j,c,p,n,t,m,l,x;
	char s[1000];
	scanf("%lld",&t);
	m=1;
	while(m<=t)
	{
		c=0;
		scanf("%lld",&n);
		getchar();
		for(i=1;i<=n;i++)
		{
			
			gets(s);
			l=strlen(s);
			if(strcmp(s,"LEFT")==0)
			{
				a[i]=-1;
			
				c=c-1;
				x=c;
			}
			else if(strcmp(s,"RIGHT")==0)
			{
				a[i]=1;
				
				c=c+1;
				x=c;
			}
			else
			{
				p=0;
				x=c;
				for(j=0;j<l;j++)
				{
				
					if(s[j]>='0'&&s[j]<='9')
					{
						p=p*10+(s[j]-48);
					}
				
				}
				
					c=c+a[p];
					
					a[i]=c-x;
					
			}
		}
		printf("%lld\n",c);
		m++;
	}
	return 0;
}
