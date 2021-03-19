#include<stdio.h>
#include<string.h>
int main()
{
	long long int t,i,j,k,l,l1,l2,m,z;
	char a[30],b[30],ch;
	scanf("%lld",&t);
	scanf("%c",&ch);
	l=1;
	while(l<=t)
	{
		k=0;
		j=0;
		char c[50]="\0";
		gets(a);
		gets(b);
		l1=strlen(a);
		l2=strlen(b);
		for(i=0;i<l1;i++)
		{
			if(a[i]!=' ')
			{
				c[k]=a[i];
				k++;
			}
			else
			{
				j++;
			}
		}
		if(strcmp(c,b)==0&&j==0)
		{
			printf("Case %lld: Yes\n",l);
		}
		else if(strcmp(c,b)==0&&j>0)
		{
			printf("Case %lld: Output Format Error\n",l);
		}
		else
		{
			printf("Case %lld: Wrong Answer\n",l);
		}
		l++;
	}
	return 0;
}
