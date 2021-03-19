#include<stdio.h>
int main()
{
	int a,b,c,i,j,k,f=1;
	scanf("%d",&b);
	k=1;
	while(k<=b)
	{
	scanf("%d %d",&a,&c);
		if(a<=9)
		{
	f=1;
	while(f<=c)
	{
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",i);
		}
		
		printf("\n");
	}
		for(i=a-1;i>=1;i--)
	{
	for(j=1;j<=i;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	if(f!=c)
	{
		printf("\n");
	}
	f++;
}
if(k!=b)
{
	printf("\n");
}
	k++;
}
}
return 0;
}
