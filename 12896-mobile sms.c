#include<stdio.h>
int main()
{
	long long int j,t,n,a[2000],b[2000],i;
	char s[5000];
	scanf("%lld",&t);
j=1;
	while(j<=t)
	{
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			scanf("%lld",&b[i]);
		}
		for(i=0;i<n;i++)
		{
			if(a[i]==1)
			{
				if(b[i]==1)
				{
					s[i]='.';
				}
				else if(b[i]==2)
				{
					s[i]=',';
				}
				else if(b[i]==3)
				{
					s[i]='?';
				}
				else
				{
					s[i]=34;
				}
			}
				if(a[i]==2)
			{
				if(b[i]==1)
				{
					s[i]='a';
				}
				else if(b[i]==2)
				{
					s[i]='b';
				}
				else if(b[i]==3)
				{
				s[i]='c';
				}
			}
				if(a[i]==3)
			{
				if(b[i]==1)
				{
					s[i]='d';
				}
				else if(b[i]==2)
				{
					s[i]='e';
				}
				else if(b[i]==3)
				{
					s[i]='f';
				}
			}
				if(a[i]==4)
			{
				if(b[i]==1)
				{
					s[i]='g';
				}
				else if(b[i]==2)
				{
					s[i]='h';
				}
				else if(b[i]==3)
				{
					s[i]='i';
				}
			}
				if(a[i]==5)
			{
				if(b[i]==1)
				{
				s[i]='j';
				}
				else if(b[i]==2)
				{
					s[i]='k';
				}
				else if(b[i]==3)
				{
					s[i]='l';
				}
			}
				if(a[i]==6)
			{
				if(b[i]==1)
				{
					s[i]='m';
				}
				else if(b[i]==2)
				{
					s[i]='n';
				}
				else if(b[i]==3)
				{
					s[i]='o';
				}
			}
				if(a[i]==7)
			{
				if(b[i]==1)
				{
					s[i]='p';
				}
				else if(b[i]==2)
				{
				s[i]='q';
				}
				else if(b[i]==3)
				{
					s[i]='r';
				}
				else
				{
					s[i]='s';
				}
			}
				if(a[i]==8)
			{
				if(b[i]==1)
				{
				s[i]='t';
				}
				else if(b[i]==2)
				{
					s[i]='u';
				}
				else if(b[i]==3)
				{
					s[i]='v';
				}
			}
				if(a[i]==9)
			{
				if(b[i]==1)
				{
					s[i]='w';
				}
				else if(b[i]==2)
				{
					s[i]='x';
				}
				else if(b[i]==3)
				{
					s[i]='y';
				}
				else
				{
					s[i]='z';
				}
			}
			else if(a[i]==0)
			{
				s[i]=' ';
			}
		}
		for(i=0;i<n;i++)
		{
			printf("%c",s[i]);
		}
		printf("\n");
		j++;
	}
	return 0;
}
