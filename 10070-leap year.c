#include<stdio.h>
int main()
{
    long long int year,leap_year,huluculu_year,bulukulu_year,m,i;
    char g[100000];
      while(gets(g))
    {
    	m=strlen(g);
    	year=0;
    	for(i=0;i<m;i++)
    	{
    		year=year*10+(g[i]-48);
		}
    	
        if(year>=2000)
        {
            if(year%4==0&&year%100!=0)
            {
                leap_year=year;
            }
            else if(year%400==0)
            {
                leap_year=year;
            }
            if(year%15==0)
            {
                huluculu_year=year;
                if(huluculu_year==leap_year)
                {
                    printf("This is leap year.\nThis is huluculu festival year.\n");
                }
                else
                {
                    printf("This is huluculu festival year.\n");
                }
            }
            if(year==leap_year&&year%55==0)
            {
                bulukulu_year=year;
                if(bulukulu_year==huluculu_year)
                {
                    printf("This is bulukulu festival year.\n");
                }
            }
            if(year!=huluculu_year&&year!=bulukulu_year&&year!=leap_year)
            {
                printf("This is an ordinary year.\n");
            }
            if(year!=huluculu_year&&year!=bulukulu_year&&year==leap_year)
            {
                printf("This is leap year.\n");
            }
        }
        printf("\n");
    }
    return 0;
}

