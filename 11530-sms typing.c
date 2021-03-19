#include<stdio.h>
#include<string.h>
int main()
{
	long long int i,j,n,c=0,l;
	char st[102];
	scanf("%lld",&n);
	for(i=0;i<=n;i++)
		{
			c=0;
			gets(st);
			l=strlen(st);
			if(l==0)
			{
				continue;
			}
			for(j=0;j<l;j++)
		{
			if(st[j]=='a'||st[j]=='d'||st[j]=='g'||st[j]=='j'||st[j]=='m'||st[j]=='p'||st[j]=='t'||st[j]=='w'||st[j]==' ')
			{
				c=c+1;
			}
			else if(st[j]=='b'||st[j]=='e'||st[j]=='h'||st[j]=='k'||st[j]=='n'||st[j]=='q'||st[j]=='u'||st[j]=='x')
			{
				c=c+2;
			}
			else if(st[j]=='c'||st[j]=='f'||st[j]=='i'||st[j]=='l'||st[j]=='o'||st[j]=='r'||st[j]=='v'||st[j]=='y')
			{
				c=c+3;
			}
			else if(st[j]=='s'||st[j]=='z')
			{
				c=c+4;
			}
		}
		if(i!=0)
		printf("Case #%lld: %lld\n",i,c);
		}
	return 0;
}
