#include<stdio.h>
#include<string.h>
int main()
{
	long long int t,i,j,l1,l2,f,r;
	char a[50],b[50];
	scanf("%lld",&t);
	j=1;
	while(j<=t)
	{
		scanf("%s",a);
		scanf("%s",b);
		l1=strlen(a);
		l2=strlen(b);
		if(l1!=l2)
		{
			printf("No\n");
		}
		else
		{
			f=0;
			r=0;
			for(i=0;i<l1;i++)
			{
				if(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u')
				{
					if(a[i]==b[i])
					{
						f=0;
					}
					else
					{
						f=1;
						break;
					}
				}
				else
				{
					if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u'||b[i]=='0')
					
					{
					r=0;	
					}
					else
					{
						r=1;
						break;
					}
				}
				if(r==1||f==1)
				{
					break;
				}
			}
			if(r==0&&f==0)
			{
				printf("Yes\n");
			}
			else
			{
				printf("No\n");
			}
		}
		j++;
	}
	return 0;
}