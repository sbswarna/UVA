#include<stdio.h>
int main()
{
	double l,wd,d,wg,t,k,c=0;
	int j=0,ara[500],i;
	scanf("%lf",&t);
	k=1;
	while(k<=t)
	{
		scanf("%lf%lf%lf%lf",&l,&wd,&d,&wg);
		if(l<=56&&wd<=45&&d<=25&&wg<=7||l+wd+d<=125&&wg<=7)
		{
			printf("1\n");	
			ara[j]=1;
			j++;
		}
		else
		{
			printf("0\n");
			ara[j]=0;
			j++;
		}
	if(k==t)
	{
	for(i=1;i<=j;i++)
	{
		if(ara[i]==1)
		c++;
	}
	printf("%.0lf\n",c+1);
}
	k++;
}
		return 0;
}
