
#include<stdio.h>
int main()
{
    int a,b,c,t,i;
    while(scanf("%d",&t)==1)
    {
        if(t<20)
        {
            i=1;
            while(i<t)
            {
                scanf("%d%d%d",&a,&b,&c);
                if(a>=1000&&a<=10000&&b>=1000&&b<=10000&&c>=1000&&c<=10000)
                {
                    if(a>b&&b>c||c>b&&b>a)
                    {
                        printf("Case %d: %d\n",i,b);
                    }
                    if(a>c&&c>b||b>c&&c>a)
                    {
                        printf("Case %d: %d\n",i,c);
                    }
                    if(b>a&&a>c||c>a&&a>b)
                    {
                        printf("Case %d: %d\n",i,a);
                    }
                    i++;
                }
            }
        }
    }
    return 0;
}
