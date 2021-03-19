#include<stdio.h>
#include<string.h>
int main()
{
	long long int n,i,j,x,l,k,p;
	char s[500];
	while(scanf("%lld",&n)==1)
	{
		if(n==0)
		{
			break;
		}
		else
		{
			scanf("%s",s);
			l=strlen(s);
			p=l/n;
			for(j=0;j<l;j=j+p)
			{
				for(i=j+p-1;i>=j;i--)
				{
					printf("%c",s[i]);
				}
				}
			}
			printf("\n");
	}
	return 0;
}
