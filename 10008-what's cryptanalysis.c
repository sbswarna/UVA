#include<stdio.h>
#include<string.h>
int main()
{
	long long int i,j,l,n,a[50],b[50],temp,temp1;
	char s[1000],ch;
	scanf("%lld",&n);
	for(i=0;i<50;i++)
	{
		a[i]=0;
		b[i]=0;
	}
	getchar();
	for(j=1;j<=n;j++)
	{
		gets(s);
		l=strlen(s);
		for(i=0;i<l;i++)
			{
				if(s[i]>='A'&&s[i]<='Z')
				{
					a[s[i]-'A']++;
					b[s[i]-'A']=s[i]-'A';
				}
				else if(s[i]>='a'&&s[i]<='z')
				{
					a[s[i]-'a']++;
					b[s[i]-'a']=s[i]-'a';

				}
			}
}
for(j=0;j<26;j++)
	{
		for(i=j+1;i<26;i++)
		{
			if(a[j]<a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				temp1=b[i];
				b[i]=b[j];
				b[j]=temp1;
			}
			else if(a[j]==a[i])
			{
				if(b[j]>b[i])
				{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
				temp1=b[j];
				b[j]=b[i];
				b[i]=temp1;
				}
			}
		}	
	}
for(i=0;i<26;i++)
	{
		if(a[i]>0)
		{
			printf("%c %lld\n",b[i]+'A',a[i]);
		}
	}
	return 0;
}
