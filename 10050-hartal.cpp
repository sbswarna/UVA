#include<stdio.h>
int main()
{
    long long int a[400],b[4000],m,t,i,wd,pp,day,j;
    scanf("%lld",&t);
    m=1;
    while(m<=t)
    {
        wd=0;
        scanf("%lld",&day);
        scanf("%lld",&pp);
        for(i=0; i<pp; i++)
        {
            scanf("%lld",&a[i]);
        }
        for(i=0; i<4000; i++)
        {
            b[i]=0;
        }
        for(i=0; i<pp; i++)
        {
            for(j=0; j<day; j++)
            {
                if((j+1)%a[i]==0)
                {
                    b[j]=1;
                }
            }
        }
        for(i=5; i<day; i=i+7)
        {
            if(b[i]==1)
            {
            	b[i]=0;
			}
			if(b[i+1]==1)
			{
				b[i+1]=0;
			}
            
        }
        for(i=0; i<day; i++)
        {
            if(b[i]==1)
            {
                wd++;
            }
        }
        printf("%lld\n",wd);
        m++;
    }

    return 0;
}
