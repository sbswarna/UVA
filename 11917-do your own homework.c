#include<stdio.h>
struct homework
{
	char subject[60];
	long long int day;
} h[500];
int main()
{
	long long int i,k,t,n,flag,sum,f,x,p,d;
	char s[700];
	scanf("%lld",&t);
	k=1;
	while(k<=t)
	{
		flag=0;
		f=0;
		scanf("%lld",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",h[i].subject);
		scanf("%lld",&h[i].day);
	}
	scanf("%lld",&d);
	scanf("%s",s);
	for(i=0;i<n;i++)
	{
		p=strcmp(h[i].subject,s);
		if(p==0)
		{
			flag=1;
			x=i;
			break;
		}
	}
	if(flag==1)
	{
		sum=d+5;
		if(d>=h[x].day&&sum>h[x].day)
		{
			f=1;
		}
		else if(sum>=h[x].day&&h[x].day>d)
		{
			f=2;
		}
		else
		{
			f=3;
		}
		if(f==1)
	{
		printf("Case %lld: Yesss\n",k);
	}
	else if(f==2)
	{
		printf("Case %lld: Late\n",k);
	}
	else
	{
		printf("Case %lld: Do your own homework!\n",k);
	}
	}
	else
	{
		printf("Case %lld: Do your own homework!\n",k);
	}
	k++;
}
return 0;
}
