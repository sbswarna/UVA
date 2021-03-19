#include<stdio.h>
#include<math.h>
int main()
{
	long long int a,n,i,p,j,flag=0,f;
	i=1;
	while(scanf("%lld",&a)==1)
	{
		if(a==0)
		{
			break;
		}
		else
		{
	p=(9+8*a);
	f=sqrt(p);
	if(f*f==p)
	{
	n=(3+sqrt(p))/2;
printf("Case %lld: %lld\n",i,n);
	}
	else
	{
	n=1+((3+sqrt(p))/2);
printf("Case %lld: %lld\n",i,n);
}
	i++;
}
}
	return 0;
}
