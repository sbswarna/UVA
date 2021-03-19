#include<stdio.h>
int main()
{
    long long int a,b,c,n,i,s,t,j;
    scanf("%lld",&t);
    j=1;
    while(j<=t)
    {
    	scanf("%lld",&n);
    	if(n==1)
    	{
    		printf("Scenario #%lld:\n2\n\n",j);
		}
    	else
		{
		a=0;
    	b=1;
      c=a+b;
      s=1;
    for(i=1;i<n-1;i++)
    {
        a=b;
        b=c;
        c=a+b;
        s=s+c;
  }
      printf("Scenario #%lld:\n%lld\n\n",j,s+2);
  }
      j++;
}
return 0;
}
