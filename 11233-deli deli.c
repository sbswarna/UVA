#include<stdio.h>
#include<string.h>
struct input
{
    char a[50];
    char b[50];
    char c[50];

} ara[1000];
int main()
{
    long long int i,j,m,n,f,l,k;
    while(scanf("%lld%lld",&m,&n)==2)
    {
        for(i=0; i<m; i++)
        {
            scanf("%s %s",ara[i].a,ara[i].b);
        }
        for(i=0; i<n; i++)
        {
            scanf("%s",ara[i].c);
        }
        for(i=0; i<n; i++)
        {
            f=0;
            for(j=0; j<m; j++)
            {
                if(strcmp(ara[i].c,ara[j].a)==0)
                {
                    f=1;
                    printf("%s\n",ara[j].b);
                    break;
                }
            }
            if(f==0)
            {
                l=strlen(ara[i].c);
                if(ara[i].c[l-1]=='y')
                {

                    if((ara[i].c[l-2])=='a'||(ara[i].c[l-2])=='e'||(ara[i].c[l-2])=='i'||(ara[i].c[l-2])=='o'||(ara[i].c[l-2])=='u')
                    {
                        printf("%s\n",strcat(ara[i].c,"s"));
                    }
                    else
                    {
                        for(k=0; k<l-1; k++)
                        {
                            printf("%c",ara[i].c[k]);
                        }
                        printf("ies\n");
                    }
                }

                else if(ara[i].c[l-1]=='o'||ara[i].c[l-1]=='x'||ara[i].c[l-1]=='s'||(ara[i].c[l-1]=='h'&&ara[i].c[l-2]=='c')||(ara[i].c[l-1]=='h'&&ara[i].c[l-2]=='s'))
                {
                    printf("%s\n",strcat(ara[i].c,"es"));
                }
                else
                {
                    printf("%s\n",strcat(ara[i].c,"s"));
                }
            }
        }
    }
    return 0;
}
