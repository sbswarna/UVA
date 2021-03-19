#include<stdio.h>
#include<string.h>
int main()
{
	long long int l,i,j,p,o,a,q,m;
	char s[1000];
	while(gets(s)!=EOF)
	{
		l=strlen(s);
			if(!(s[0]>='0'&&s[0]<='9'))
			{
			
			for(i=l-1;i>=0;i=i-1)
			{
				if(s[i]>='A'&&s[i]<='Z'||s[i]>='a'&&s[i]<='z'||s[i]==32||s[i]==33||s[i]==44||s[i]==46||s[i]==58||s[i]==59||s[i]==63)
				{
					a=s[i];
					for(j=1;j;j++)
					{
						p=a%10;
						q=a/10;
						a=q;
						printf("%lld",p);
						if(q==0)
						{
							break;
						}
					}
				}
			}
			
			}
			else
			{
				for(i=l-1;i>=0;i=i-p)
				{
					a=((s[i]-48)*10)+(s[i-1]-48);
					if((a>=65&&a<=90)||(a>=97&&a<=122)||a==32||a==33||a==44||a==46||a==58||a==59||a==63)
					{
						p=2;
						printf("%c",a);
					}
					else
					{
						o=s[i-2]-48;
						p=3;
						printf("%c",a*10+o);
					}
				}
			}
			printf("\n");
	}
	return 0;
}
