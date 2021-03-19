#include<stdio.h>
int main()
{
	long long int a,b,c,i,k,l,p,q,r,s;
	while(scanf("%lld%lld",&a,&b)==2)
	{
		if(a==0&&b==0)
		{
			break;
		}
		else
		{
			r=0;
			c=0;
			for(i=1;i;i++)
			{
				p=a%10;
				q=b%10;
				s=r+p+q;
				k=a/10;
				l=b/10;
				a=k;
				b=l;
				if(s>9)
				{
					r=1;
					c++;	
				}
				else
				{
					r=0;
				}
				if(b>a)
				{
					if(l==0)
					{
						break;
					}
				}
				else
				{
					if(k==0)
					{
						break;
					}
				}
			}
			if(c==0)
			{
				printf("No Carry operation.\n");
			}
			else
			{	
				if(c==1)
				{
					printf("1 carry operation.\n");
				}
				else
				{
					printf("%lld carry operations.\n",c);
				}
			}
		}
	}
	return 0;
}
