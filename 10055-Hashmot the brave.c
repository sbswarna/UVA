#include<stdio.h>
int main()
{
    long long int h,o,d;
    while(scanf("%lld%lld",&h,&o)==2)
    {
        if(h>o)
        {
            d=h-o;
            printf("%lld\n",d);
        }
        else
        {
            d=o-h;
            printf("%lld\n",d);
        }
    }
    return 0;
}
