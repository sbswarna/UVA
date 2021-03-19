#include<stdio.h>
int main()
{
	long long int t,i,j,d,p,k,s=0,e,f,c;
	scanf("%lld",&t);
	i=1;
	while(i<=t)
	{
		s=0;
		scanf("%lld%lld%lld",&e,&f,&c);
		p=e+f;
		for(j=1;j;j++)
		{
			d=p%c;
			k=p/c;
			s=s+k;	
			p=d+k;
			if(k==0&&d!=0||d==0&k<c)
			{
				break;
			}
		}
		printf("%lld\n",s);
		i++;
	}
	return 0;
}
