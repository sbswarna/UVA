#include<stdio.h>
int main()
{
    int v,t,s;
    while(scanf("%d%d",&v,&t)==2)
    {
        if(v>=-100&&v<=100&&t<=200&&t>=0)
        {
        s=2*v*t;
        printf("%d\n",s);
        }
        else
        {
            printf(" ");
        }
    }
    return 0;
}
