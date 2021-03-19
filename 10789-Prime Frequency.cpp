#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
long long int prime(long long int z)
{
	long long int h,flg=0;
	if(z==2)
	{
		return 1;
	}
	else
	{
	for(h=2;h<z;h++)
	{
		if(z%h==0)
		{
			flg=1;
			break;
		}
	}
	if(flg==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
}
long long int x,i,a[20],b[30],c[30],d[20],e[30],f[30],t,k,l,m,n,p;
int main()
{
	
	char s[2030];
	scanf("%lld",&t);
	x=1;
	while(x<=t)
	{
		scanf("%s",s);
		l=strlen(s);
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		memset(c,0,sizeof(c));
		memset(d,0,sizeof(d));
		memset(e,0,sizeof(e));
		memset(f,0,sizeof(f));
		k=0;
		m=0;
		n=0;
		for(i=0;i<l;i++)
		{
			if(s[i]>='0'&&s[i]<='9')
			{
				a[s[i]-'0']++;
			}
			else if(s[i]>='A'&&s[i]<='Z')
			{
				b[s[i]-'A']++;
			}
			else if(s[i]>='a'&&s[i]<='z')
			{
				c[s[i]-'a']++;
			}
		}
	
		for(i=0;i<10;i++)
		{
		if(a[i]>1)
			{
				p=prime(a[i]);
				if(p==1)
				{
					d[k]=i;
					k++;
				}
			}
		}
		for(i=0;i<26;i++)
		{
			if(b[i]>1)
			{
				p=prime(b[i]);
				if(p==1)
				{
					e[m]=i;
					m++;
				}
			}
		}
		for(i=0;i<26;i++)
		{
			if(c[i]>1)
			{
				p=prime(c[i]);
				if(p==1)
				{
					f[n]=i;
					n++;
				}
			}
		}
	
		printf("Case %lld: ",x);
		if(m==0&&k==0&&n==0)
		{
			printf("empty");
		}
		else if(k==0)
		{
			for(i=0;i<m;i++)
			{
				printf("%c",e[i]+65);
			}
			for(i=0;i<n;i++)
			{
				printf("%c",f[i]+97);
			}
		}
		else if(m==0)
		{
			for(i=0;i<k;i++)
			{
				printf("%c",d[i]+48);
			}
			for(i=0;i<n;i++)
			{
				printf("%c",f[i]+97);
			}
		}
		else if(n==0)
		{
			for(i=0;i<k;i++)
			{
				printf("%c",d[i]+48);
			}
			for(i=0;i<m;i++)
			{
				printf("%c",e[i]+65);
			}
		}
		else
		{
			for(i=0;i<k;i++)
			{
				printf("%c",d[i]+48);
			}
			for(i=0;i<m;i++)
			{
				printf("%c",e[i]+65);
			}
			for(i=0;i<n;i++)
			{
				printf("%c",f[i]+97);
			}
		}
		printf("\n");
		x++;
	}
	return 0;
}
