#include<stdio.h>
int main()
{
	long int a,b,c,i,N;
	scanf("%ld",&N);
	if(N>=2&&N<=20)
	{
		i=1;
		while(i<=N)
		{
			scanf("%ld %ld %ld",&a, &b, &c);
			if(a+b<=c||b+c<=a||c+a<=b||a==0||b==0||c==0)
			{
				printf("Wrong!!\n");
			}
			else if(a+b>c||b+c>a||c+a>b)
			{
				printf("OK\n");
			}
			i++;
		}
		return 0;
	}
}
