#include<stdio.h>
int main()
{
	long int a,b,c,i,T;
	scanf("%ld",&T);
	if(T<=20)
	{
		i=1;
		while(i<=T)
		{
		scanf("%ld %ld %ld",&a,&b,&c);
		if(a+b<=c||b+c<=a||c+a<=b||a==0||b==0||c==0)
		{
			printf("Case %ld: Invalied\n",i);
		}
		else if(a+b>c||b+c>a||c+a>b)
		{
			if(a==b&&b==c&&c==a)
			{
				printf("Case %ld: Equilateral\n",i);		
			}
			else if(a==b||b==c||c==a)
			{
				printf("Case %ld: Isosceles\n",i);	
			}
			else if(a!=b||b!=c||c!=a)
			{
				printf("Case %ld: Scalene\n",i);
			}
		}
		i++;
	}
}
return 0;
}
