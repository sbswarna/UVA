#include<stdio.h>
int main()
{
	long long int A,X,i,p,m,c,t=0;
	while(scanf("%lld%lld",&A,&m)==2)
	{
		X=A;
		c=1;
	t=t+1;
		if(A<0&&m<0)
		{
			break;
		}
		else
		{
			for(i=1;i;i++)
			{
			if(A%2==0)
			{
				p=A/2;	
		}
			else
			{
				p=3*A+1;
		}
		if(p>=m)
			{
				break;
			}
			A=p;
			c++;
			if(p==1)
			{
				break;
	}
		}	
		}
			printf("Case %lld: A = %lld, limit = %lld, number of terms = %lld\n",t,X,m,c);
	}
	return 0;
}
