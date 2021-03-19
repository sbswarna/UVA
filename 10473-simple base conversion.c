#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    long long int p,i,l,s,x,y,j,n;
    char a[99999],d[99999];
    while(scanf("%s",a)!=EOF)
    {
        s=0;
        j=0;
        l=strlen(a);
        if(a[0]=='-')
        {
            break;
        }
        else
        {
            if(a[0]=='0'&&a[1]=='x')
            {
                for(i=2; i<l; i++)
                {
                    if(a[i]=='A')
                    {
                        n=10;
                    }
                    else if(a[i]=='B')
                    {
                        n=11;
                    }
                    else if(a[i]=='C')
                    {
                        n=12;
                    }
                    else if(a[i]=='D')
                    {
                        n=13;
                    }
                    else if(a[i]=='E')
                    {
                        n=14;
                    }
                    else if(a[i]=='F')
                    {
                        n=15;
                    }
                    else
                    {
                        n=a[i]-48;
                    }
                    s=s+(n*pow(16,l-i-1));
                }
                printf("%lld\n",s);
            }
            else
            {
                for(i=0; i<l; i++)
                {
                    p=a[i]-48;
                    s=s*10+p;
                }
                for(i=1; i; i++)
                {
                    x=s%16;
                    y=s/16;
                    if(x==10)
                    {
                        d[j]='A';
                        j++;
                    }
                    else if(x==11)
                    {
                        d[j]='B';
                        j++;
                    }
                    else if(x==12)
                    {
                        d[j]='C';
                        j++;
                    }
                    else if(x==13)
                    {
                        d[j]='D';
                        j++;
                    }
                    else if(x==14)
                    {
                        d[j]='E';
                        j++;
                    }
                    else if(x==15)
                    {
                        d[j]='F';
                        j++;
                    }
                    else
                    {
                        d[j]=x+48;
                        j++;
                    }
                    s=y;
                    if(y==0)
                    {
                        break;
                    }
                }
                for(i=j-1; i>=0; i--)
                {
                    if(i==j-1)
                    {
                        printf("0x");
                    }
                    printf("%c",d[i]);
                }
                printf("\n");
            }
        }
    }
    return 0;
}
