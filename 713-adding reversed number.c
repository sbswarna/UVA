#include<stdio.h>
#include<string.h>
int main()
{
	long long int i,j,p,q,r,k,l1,l2,s,m,t,h;
	char a[1000],b[1000],c[1000];
	scanf("%lld",&t);
	getchar();
	m=1;
	while(m<=t)
	{
		scanf("%s %s",a,b);
		l1=strlen(a);
		l2=strlen(b);
		r=0;
		k=0;
		if(l1>l2)
		{
			h=l1;
			for(i=l2;i<=l1;i++)
			{
				b[i]='0';
				
			}
			a[l1]='0';
		}
		else
		{
			h=l2;
			for(i=l1;i<=l2;i++)
			{
				a[i]='0';
				
			}
			b[l2]='0';
		}
		for(i=0;i<=h;i++)
		{
			s=a[i]-48+b[i]-48+r;
			if(s>9)
			{
				r=1;
				c[k]=(s%10)+48;
				k++;
			}
			else
			{
				r=0;
				c[k]=s+48;
				k++;
			}
		}
		if(c[k-1]=='0')
		{
			p=k-1;
		}
		else
		{
			p=k;
		}
		for(i=0;i<p;i++)
		{
			if(c[0]=='0')
			{
				for(j=0;j<p;j++)
				{
					if(c[j]!='0')
					{
						q=j;
						break;
					}
				}
			}
			else
			{
				q=i;
				break;	
			}
		}
		for(i=q;i<p;i++)
		{
		printf("%c",c[i]);
	}
	printf("\n");
	m++;
	}
	return 0;
}
