#include<stdio.h>
#include<math.h>
long long int m,n,ara1[1000000],ara2[1000000],p,q,a,b,i,l,ara3[1000000],s,k;
int main()
{
	
	while(scanf("%lld%lld",&m,&n)==2)
	{
		k=0;
		p=0;
		q=0;
		s=0;
		for(i=1;i;i++)
		{
			a=m%2;
			b=m/2;
			m=b;
			ara1[p]=a;
			p++;
			if(b==0)
			{
				break;
			}
		}
		for(i=1;i;i++)
		{
			a=n%2;
			b=n/2;
			n=b;
			ara2[q]=a;
			q++;
			if(b==0)
			{
				break;
			}
		}
	
		if(p>q)
		{
			l=p;
			for(i=q;i<p;i++)
			{
				ara2[i]=0;
			}
		}
		else
		{
			l=q;
			for(i=p;i<q;i++)
			{
				ara1[i]=0;
			}
		}
		for(i=0;i<l;i++)
		{
			if(ara1[i]==0&&ara2[i]==0||ara1[i]==1&&ara2[i]==1)
			{
				ara3[k]=0;
				k++;
			}
			else
			{
				ara3[k]=1;
				k++;
			}
	}
		for(i=0;i<k;i++)
		{
			s=s+(ara3[i]*pow(2,i));
		}
		printf("%lld\n",s);
	}
	return 0;
}
