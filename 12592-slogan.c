#include<stdio.h>
#include<string.h>
struct line 
{
	char s1[1000];
	char s2[1000];
} a[100];
int main()
{
	long long int n,m,q,i,j;
	char s[1000];
	while(scanf("%lld",&n)==1)
	{
		getchar();
		for(i=0;i<n;i++)
		{
			gets(a[i].s1);
			gets(a[i].s2);
		}
		scanf("%lld",&m);
		getchar();
		for(i=0;i<m;i++)
		{
			gets(s);
			for(j=0;j<n;j++)
			{
				if(strcmp(a[j].s1,s)==0)
				{
					printf("%s\n",a[j].s2);
					
					break;
				}
			}
		}
	}
	return 0;
}
