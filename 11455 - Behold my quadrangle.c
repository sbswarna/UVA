#include<stdio.h>
int main()
{
    long long int a,b,c,d,i,t;
    scanf("%lld",&t);
    i=1;
    while(i<=t)
    {
        scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
        if(a!=0&&b!=0&&c!=0&&d!=0)
        {
            if(a==b&&b==c&&c==d&&d==a)
        {
            printf("square\n");
        }
        else if(a==c&&b==d||a==b&&d==c||a==d&&b==c)
        {
            printf("rectangle\n");
        }
        else if(a+b+c>d&&a+b+d>c&&a+c+d>b&&b+c+d>a)
        {
            printf("quadrangle\n");
        }
        else
        {
            printf("banana\n");
        }
        }
        else
        {
            printf("banana\n");
        }
        i++;
    }
    return 0;
}
