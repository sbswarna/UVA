#include<stdio.h>
int main()
{
	int n,m,s,i,t;
	scanf("%d",&t);
	i=1;
	while(i<=t)
	{
	scanf("%d",&n);
	if(n<=1000&&n>=-1000)
	{
	s=(((((n*567)/9)+7492)*235)/47)-498;
	m=s/10;
	m=m%10;
	if(m>0)
	{
	printf("%d\n",m);
}
else
{
	m=m*-1;
	printf("%d\n",m);
}
}
i++;
}
return 0;
}
