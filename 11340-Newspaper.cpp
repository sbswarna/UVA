#include<iostream>
#include<cstring>
#include<vector>
#include<cstdio>
using namespace std;
struct ch
{
	char s;
	double amnt;
} a[1000];
int main()
{
	long long i,j,m,t,line,ct,l,k,p,q;
	char ln[1000000];
	double res;
	scanf("%lld",&t);
	getchar();
	m=1;
	while(m<=t)
	{
		scanf("%lld",&ct);
		getchar();
		for(i=0;i<ct;i++)
		{
			if(i!=0)
			getchar();
			scanf("%c%lf",&a[i].s,&a[i].amnt);
		}
	
		scanf("%lld",&line);
		getchar();
		res=0.00;
		for(k=1;k<=line;k++)
		{
			gets(ln);
			l=strlen(ln);
			for(i=0;i<l;i++)
			{
				if(ln[i]==' ')
				{
					res=res+0;
				}
				else
				{
				for(j=0;j<ct;j++)
				{
					p=a[j].s;
					q=ln[i];
					if(p==q)
					{
						res=res+a[j].amnt;
						break;
					}
		}
				}
			}
		}
		
		printf("%.2lf$\n",res/100.00);
		m++;
	}
	return 0;
}
