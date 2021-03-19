#include<stdio.h>
long long int a[200000000];
int main()
{
	long long int i,k,f,p,m,n,d,x;
	while(scanf("%lld%lld",&m,&n)==2)
	{
	    if(m==0||n==0||m==1&&n==1||n==1)
        {
            printf("Boring!\n");
        }
		else
		{
                x=m;
		k=0;
		f=0;
		for(i=1;i;i++)
		{
			d=m%n;
			p=m/n;
			m=p;
			a[k]=p;
			k++;
			if(d!=0)
			{
				f=1;
				break;
			}
			else if(p==1)
			{
				f=0;
				break;
			}
		}
		if(f==0)
		{
			for(i=0;i<k;i++)
			{
				if(i==0)
				{
					printf("%lld ",x);
				}
				printf("%lld",a[i]);
				if(i!=k-1)
				{
					printf(" ");

				}
			}
			printf("\n");
		}
		else
		{
			printf("Boring!\n");
		}
		}
	}
	return 0;
}
