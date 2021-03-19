#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int a[10],b[10],i,j,k,t;
    char s1[999],s2[999],s3[999],s4[999],s5[999],s6[999],s7[999],s8[999],s9[999],s10[999];
    scanf("%lld",&t);
    i=1;
    while(i<=t)
    {
        scanf("%s%lld",s1,&a[0]);
        scanf("%s %lld",s2,&a[1]);
        scanf("%s %lld",s3,&a[2]);
        scanf("%s %lld",s4,&a[3]);
        scanf("%s %lld",s5,&a[4]);
        scanf("%s %lld",s6,&a[5]);
        scanf("%s %lld",s7,&a[6]);
        scanf("%s %lld",s8,&a[7]);
        scanf("%s %lld",s9,&a[8]);
        scanf("%s %lld",s10,&a[9]);
        printf("Case #%lld:\n",i);
        for(j=0;j<10;j++)
        {
            b[j]=a[j];
        }
        sort(b,b+10);
        if(a[0]==b[9])
        {
            printf("%s\n",s1);
        }
        if(a[1]==b[9])
        {
            printf("%s\n",s2);
        }
        if(a[2]==b[9])
        {
            printf("%s\n",s3);
        }
        if(a[3]==b[9])
        {
            printf("%s\n",s4);
        }
        if(a[4]==b[9])
        {
            printf("%s\n",s5);
        }
        if(a[5]==b[9])
        {
            printf("%s\n",s6);
        }
        if(a[6]==b[9])
        {
            printf("%s\n",s7);
        }
        if(a[7]==b[9])
        {
            printf("%s\n",s8);
        }
        if(a[8]==b[9])
        {
            printf("%s\n",s9);
        }
        if(a[9]==b[9])
        {
            printf("%s\n",s10);
        }
        i++;
    }
    return 0;
}

