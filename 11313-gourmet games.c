#include<stdio.h>
int main()
{
	long long int t,i,j,n,m,f,p,q,s;
	scanf("%lld",&t);
	j=1;
	while(j<=t)
	{
		s=0;
		f=0;
		
		scanf("%lld%lld",&n,&m);
		for(i=1;i;i++)
		{
			p=n%m;
			q=n/m;
			
			if(p==0)
			{
				n=q;
			}
			else
			{
				n=q+p;
			}
			s=s+q;
			if(q==0&&p!=0)
			{
				f=1;
				break;
			}
			else if(q==1&&p==0)
			{
				f=2;
				break;
			}
		}
		if(f==1)
		{
			printf("cannot do this\n");
		}
		else
		{
			printf("%lld\n",s);
		}
		j++;
	}
	return 0;
}
