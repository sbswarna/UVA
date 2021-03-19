#include<stdio.h>
int main()
{
	long long int t,income,p,q,r,i,tax,n,v;
	scanf("%lld",&t);
	i=1;
	while(i<=t)
	{
		tax=0;
		scanf("%lld",&income);
		if(income<=180000)
		{
			tax=0;
			printf("Case %lld: 0\n",i);
		}
		else
		{
			n=income-180000;
			if(n<=300000)
			{
				tax=(n*10)/100;
				v=(tax*100)/10;
			
				if(v!=n)
				{
					tax=tax+1;
				}
			}
			else
			{
				p=30000;
				n=n-300000;
				if(n<400000)
				{
					tax=p+((n*15)/100);
					v=((tax-p)*100)/15;
					
					if(v!=n)
				{
					tax=tax+1;
				}
				}
				else
				{
					q=60000;
					n=n-400000;
				if(n<300000)
				{
					tax=p+q+((n*20)/100);
					v=((tax-p-q)*100)/20;
					
					if(v!=n)
				{
					tax=tax+1;
				}
				}
				else
				{
					r=60000;
					n=n-300000;
					tax=p+q+r+((n*25)/100);
					v=((tax-p-q-r)*100)/25;
						
					if(v!=n)
				{
					tax=tax+1;
				}
				}
			}
			
		}
		if(tax<2000)
			{
				tax=2000;
			}
			else
			{
				tax=tax;
			}
			printf("Case %lld: %lld\n",i,tax);
	}
	i++;
}
	return 0;
}
