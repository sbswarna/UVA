#include<stdio.h>
#include<string.h>
struct lines
{
	char s[100000];
} a[300];
int main()
{
	long long int n,i,j,l,m;
	m=1;
	while(scanf("%lld",&n)==1)
	{
		getchar();
		if(n==0)
		{
			break;
		}
		else
		{
			for(i=0;i<n;i++)
			{
				gets(a[i].s);
			}
			printf("Case %lld:\n",m);
			printf("#include<string.h>\n#include<stdio.h>\nint main()\n{\n");
			for(i=0;i<n;i++)
			{
				printf("printf(\"");
				l=strlen(a[i].s);
				for(j=0;j<l;j++)
				{
					
					if(a[i].s[j]=='\"'||a[i].s[j]=='\\')
					{
						printf("\\%c",a[i].s[j]);
					}
					else
					{
						printf("%c",a[i].s[j]);
					}
					if(j==l-1)
					{
						printf("%cn%c%c%c",92,34,41,59);
					}
				}
				printf("\n");
			}
			printf("printf%c%c%cn%c%c;\n",40,34,92,34,41);
			printf("return 0;\n}\n");
		}
		m++;
	}
	return 0;
}
