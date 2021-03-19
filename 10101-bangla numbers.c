#include<stdio.h>
int main()
{
	long long int n,t=1,a,b,c,d,e,f,g,h,i,j,k,l,m,o,p,q;
	while(scanf("%lld",&n)==1)
	{
		printf("%4d.",t);
		if(n==0)
		{
			printf(" 0\n");
		}
		else
		{
		a=n%10000000;
		b=n/10000000;
		if(b>100)
		{
			i=b%10000000;
			j=b/10000000;
			k=i%100000;
			l=i/100000;
			m=k%1000;
			o=k/1000;
			q=m%100;
			p=m/100;
		if(j>0)
		{
			printf(" %lld kuti",j);
		}
		if(l>0)
		{
			printf(" %lld lakh",l);
		}
		if(o>0)
		{
			printf(" %lld hajar",o);
		}
		if(p>0)
		{
			printf(" %lld shata",p);
		}
		if(q>0)
		{
			printf(" %lld",q);
		}
		printf(" kuti");
		}
		else if(b>0&&b<=100)
		{
			printf(" %lld kuti",b);
		}
		c=a%100000;
		d=a/100000;
		e=c%1000;
		f=c/1000;
		g=e%100;
		h=e/100;
		if(d>0)
		{
			printf(" %lld lakh",d);
		}
		if(f>0)
		{
			printf(" %lld hajar",f);
		}
		if(h>0)
		{
			printf(" %lld shata",h);
		}
		if(g>0)
		{
			printf(" %lld",g);
		}
		printf("\n");
	}
		t++; 
	}
	return 0;
}
