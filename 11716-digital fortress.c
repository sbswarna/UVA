#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	long long int i,j,k,l,p,t;
	char s[10007];
	scanf("%lld",&t);
	k=1;
	while(k<=t)
	{
		gets(s);
		l=strlen(s);
		if(l==0)
		{
			continue;
		}
		else
		{
		p=sqrt(l);
		if((p*p)!=l)
		{
			printf("INVALID\n");
		}
		else
		{
			for(i=0;i<p;i++)
			{
				for(j=i;j<l;j=j+p)
				{
					printf("%c",s[j]);
				}	
			}
			printf("\n");
		}
	}
		k++;
	}
	return 0;
}
