#include<stdio.h>
struct car
{
char	name[100];
long long 	L;
long long 	H;
} a[100000];
int main()
{
	long long int m,i,j,t,c,d,p,q;
	char s[100];
	scanf("%lld",&t);
	m=1;
	while(m<=t)
	{
		scanf("%lld",&d);
		getchar();
		for(i=0;i<d;i++)
		{
			scanf("%s %lld %lld",a[i].name,&a[i].L,&a[i].H);
		}
		scanf("%lld",&q);
		for(j=1;j<=q;j++)
		{
			scanf("%lld",&p);
			c=0;
			for(i=0;i<d;i++)
			{
				if(p>=a[i].L&&p<=a[i].H)
				{
					c++;
					if(c>1)
					{
						break;
					}
					else if(c==1)
					{
						strcpy(s,a[i].name);
					}
				}
			}

			if(c==0||c>1)
			{
				printf("UNDETERMINED\n");
			}
			else
			{
				printf("%s\n",s);
			}
		}
		if(m!=t)
		printf("\n");
		m++;
	}
	return 0;
}
