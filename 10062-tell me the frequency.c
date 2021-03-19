#include<stdio.h>
#include<string.h>
int main()
{
    long long int l,i,a[280],b[280],p,j,t,t1,test=0;
    char s[2000];
    while(gets(s))
    {

        for(i=0; i<280; i++)
        {
            a[i]=0;
            b[i]=0;
        }
        l=strlen(s);

        for(i=0; i<l; i++)
        {
            p=s[i];
            a[p]++;
            b[p]=p;
        }
        for(i=0; i<280; i++)
        {
            for(j=i+1; j<280; j++)
            {
                if(a[j]<a[i])
                {
                    t=a[i];
                    a[i]=a[j];
                    a[j]=t;
                    t1=b[i];
                    b[i]=b[j];
                    b[j]=t1;
                }
                else if(a[j]==a[i])
                {
                    t=a[j];
                    a[j]=a[i];
                    a[i]=t;
                    if(b[j]>b[i])
                    {
                        t1=b[j];
                        b[j]=b[i];
                        b[i]=t1;
                    }
                }
            }
        }
        if(test!=0)
        {
            printf("\n");
        }
        for(i=0; i<280; i++)
        {
            if(a[i]!=0)
            {
                printf("%lld %lld\n",b[i],a[i]);
            }
        }
    test++;
    }
    return 0;
}
