#include<bits/stdc++.h>
using namespace std;
	long long int n,b[20000009],c[1000009],i,j,p,q,f,k,d;
	void sieve()
	{
	
	memset(b,0,sizeof(b));
	 for(i=3;i<=sqrt(20000009);i=i+2)
    {
        if(b[i]==0)
        {
            for(j=i*i;j<=20000009;j=j+i)
            {
                b[j]=1;
            }
        }
    }
    d=0;
    for(i=3;i<=20000009;i=i+2)
    {
    	//printf("%lld %lld\n",i,b[i]);
    	if(b[i]==0&&b[i+2]==0)
    	{
    		//if(b[i+2]==0)
    		//{
    			c[d]=i;
    			d++;
			//}
		}
	}
}
int main()
{
	sieve();

	while(scanf("%lld",&n)==1)
	{
		printf("(%lld, %lld)\n",c[n-1],c[n-1]+2);

	}
	return 0;
}
