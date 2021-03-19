#include<stdio.h>
#include<string.h>
int main()
{
	long long int l,c,d,x,i,j;
	char a[898989], s[898989];
	while(gets(s))
	{
		l=strlen(s);
		if(l==0)
		{
			continue;
		}
		else
		{
		for(i=0;i<l;i=j+1)
		{
			c=0;
			for(j=i;j<l;j++)
			{
				if(s[j]!=' ')
				{
					a[c]=s[j];
					c++;
				}
				else if(s[j]==' ')
				{
					break;
			 }
			}
			for(d=c-1;d>=0;d--)
			{
				printf("%c",a[d]);
			}
			if(j<l)
			{
				printf(" ");
			}
		}
		printf("\n");	
	}	
}
	return 0; 
}
