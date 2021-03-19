#include<stdio.h>
#include<string.h>
int main()
{
	double m,l,o,p,t;
	int a[5555],ara[5555],i,j,c,k;
	char s[200];
	scanf("%lf",&t);
	m=1;
	while(m<=t)
	{
		c=0;
		k=0;
		p=0;
		o=0;
		scanf("%s",s);
		l=strlen(s);
		for(i=0;i<l;i++)
		{
			if(s[i]=='C'||s[i]=='N'||s[i]=='O'||s[i]=='H')
			{
				ara[c]=i;
				c++;
			}
		}
		for(i=0;i<l;i=j)
		{
			o=0;
			for(j=i+1;j<l;j++)
			{
				if(s[j]>='0'&&s[j]<='9')
				{
					o=o*10+(s[j]-48);
				}
				else
				{
					break;
				}
			}
			if(o==0)
			{
				a[k]=1;
				k++;
			}
			else
			{
				a[k]=o;
				k++;
			}
		}
		for(i=0;i<c;i++)
		{
			if(s[ara[i]]=='N')
			{
				p=p+a[i]*14.01;
			}
			else if(s[ara[i]]=='C')
			{
				p=p+a[i]*12.01;
			}
			else if(s[ara[i]]=='H')
			{
				p=p+a[i]*1.008;
			}
			else if(s[ara[i]]=='O')
			{
				p=p+a[i]*16.00;
			}
		}
		printf("%0.3lf\n",p);
		m++;
	}
	return 0;
}
