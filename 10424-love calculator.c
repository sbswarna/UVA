#include<stdio.h>
#include<string.h>
int main()
{
	char n1[25],n2[25];
	long int i,j,l1,l2,c=0,h=0,s1=0,s2=0,c1=0,h1=0,sum1=0,sum2=0,p,q,d,e,k,u,s12,s34,s3,s4;
	double v;
	while(gets(n1))
	{
		s1=0;
		s2=0;
		s3=0;
		s4=0;
		sum1=0;
		sum2=0;
		gets(n2);
		l1=strlen(n1);
		l2=strlen(n2);
		if(l1==0||l2==0)
		{
			continue;
		}
		else
		{
			for(i=0;i<l1;i++)
			{
				if(n1[i]>='A'&&n1[i]<='Z')
				{
					s1=s1+(n1[i]-64);
				}
				else if(n1[i]>='a'&&n1[i]<='z')
				{
					s2=s2+(n1[i]-96);
				}
			}
			s12=s1+s2;
			for(j=0;j<l2;j++)
			{
				if(n2[j]>='A'&&n2[j]<='Z')
				{
					s3=s3+(n2[j]-64);
				}
				else if(n2[j]>='a'&&n2[j]<='z')
				{
					s4=s4+(n2[j]-96);
				}
			}
			s34=s3+s4;
				for(k=1;k;k++)
				{
				p=s12%10;
				q=s12/10;
				s12=q;
				sum1=sum1+p;
				if(q==0)
				{
					if(sum1<10)
					{
						break;
					}
					else if(sum1>=10)
					{
						s12=sum1;
						sum1=0;
					}
				}
			}
				for(u=1;u;u++)
				{
				e=s34%10;
				d=s34/10;
				s34=d;
				sum2=sum2+e;
				if(d==0)
				{
					if(sum2<10)
					{
						break;
					}
					else if(sum2>=10)
					{
						s34=sum2;
						sum2=0;
					}
				}
			}	
			if(sum1>=sum2)
			{
				v=(double)sum2/(double)sum1;
				printf("%.2lf %%\n",v*100);
				}
				else
				{
				v=(double)sum1/(double)sum2;
				printf("%.2lf %%\n",v*100);
				}	
		}
	}
	return 0;
}
