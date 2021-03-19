#include<stdio.h>
int main()
{
    int T,i,a,b,j,s=0;
    while(scanf("%d",&T)==1)
    {
        if(T>=1&&T<=100)
        {
            for(i=1; i<=T; i++)
            {
                scanf("%d%d",&a,&b);
                if(a>=0&&a<=100&&b>=0&&b<=100)
                {
                    for(j=a; j<=b; j++)
                    {
                        if(j%2!=0)
                        {
                            s=s+j;
                        }
                    }
                    printf("Case %d: %d\n",i,s);
                    s=0;
                }
            }
        }
    }
    return 0;
}
