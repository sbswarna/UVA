#include<stdio.h>
#include<string.h>
struct country
{
	char s[100000];
} ara[10000];
struct sort
{
	char con[10000];
} ara1[10000];
int main()
{
	long long int k,m,n,l,i,t,c,j,h,b,ar[10000],te,p;

	char list[10000],temp[10000];
	scanf("%lld",&t);
	getchar();
	k=0;
	h=0;
	b=0;
	m=1;
	while(m<=t)
	{
		gets(list);
		l=strlen(list);
		n=0;
		p=0;
		for(i=0;i<l;i++)
		{
			if(list[i]==' ')
			{
				p++;
			}
			else
			{
				break;
			}
		}
		for(i=p;i<l;i++)
		{
			if(list[i]==' ')
			{
				break;
			}
			else
			{
				ara[k].s[n]=list[i];
				n++;
			}
		}
		k++;
		m++;
	}

	for(i=0;i<k;i++)
	{
		c=1;
		if(strcmp(ara[i].s,"0")==0)
		{
			continue;
		}
		else
		{
		for(j=i+1;j<k;j++)
		{
			if(strcmp(ara[i].s,ara[j].s)==0)
			{
				c++;
				strcpy(ara[j].s,"0");
			}
		}
		strcpy(ara1[h].con,ara[i].s);
		h++;
		ar[b]=c;
		b++;
	}
	}
	for(i=0;i<h;i++)
	{
		for(j=i+1;j<h;j++)
		{
			if(strcmp(ara1[i].con,ara1[j].con)>0)
			{
				strcpy(temp,ara1[i].con);
				strcpy(ara1[i].con,ara1[j].con);
				strcpy(ara1[j].con,temp);
				te=ar[i];
				ar[i]=ar[j];
				ar[j]=te;

			}
		}
	}
	for(i=0;i<h;i++)
	{
		printf("%s %lld\n",ara1[i].con,ar[i]);
	}
	return 0;
}
