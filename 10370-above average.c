#include<stdio.h>
int main()
{
	int marks[1010],c,n,j,average_marks,sum,i,count;
	float above_average;
	scanf("%d",&c);
	j=1;
	while(j<=c)
	{
		sum=0;
		count=0;
		scanf("%d",&n);
		if(n>=1&&n<=1000)
		{
			for(i=0;i<n;i++)
			{
				scanf("%d",&marks[i]);
			}
			for(i=0;i<n;i++)
			{
				sum=sum+marks[i];
			}
			average_marks=sum/n;
			for(i=0;i<n;i++)
			{
				if(marks[i]>average_marks)
				{
					count++;
				}
			}
			above_average=((float)count/(float)n);
			printf("%.3f%%\n",above_average*100);
		}
		j++;
	}
	return 0;
}
