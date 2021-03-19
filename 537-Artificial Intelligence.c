#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    long long int i,j,k,l,t,m,n,o,f,g,h,cv,ci,cp,p;
    double si,sp,sv,q,r,x,voltage,current,power;
    char ch,s[10000];
    scanf("%lld",&t);
    ch=getchar();
    m=1;
    while(m<=t)
    {
        sp=0;
        si=0;
        sv=0;
        ci=0;
        cv=0;
        cp=0;
        f=0;
        g=0;
        h=0;
        gets(s);
        l=strlen(s);
        for(i=0;i<l;i++)
        {
            if(s[i]=='I'&&s[i+1]=='=')
            {
                if(s[i+2]=='-')
                {
                    f=1;
                    p=i+3;
                }
                else
                {
                    p=i+2;
                }
                for(j=p;j<l;j++)
                {
                    if(s[j]>='0'&&s[j]<='9')
                    {
                        si=si*10+(s[j]-48);
                    }
                    else if(s[j]=='.')
                    {
                        for(o=j+1;o<l;o++)
                        {

                            if(!(s[o]>='0'&&s[o]<='9'))
                               {

                                   break;
                               }
                               else
                               {
                                   ci++;
                               }
                        }
                    }
                    else if(s[j]=='A')
                    {
                         if(s[j-1]=='M')
                                   {
                                       q=1000000.00;
                                   }
                                   else if(s[j-1]=='m')
                                   {
                                       q=1.00/1000.00;
                                   }
                                   else if(s[j-1]=='k')
                                   {
                                       q=1000.00;
                                   }
                                   else
                                   {
                                       q=1.00;
                                   }
                        break;
                    }
                }
            }
            else if(s[i]=='U'&&s[i+1]=='=')
            {
                if(s[i+2]=='-')
                {
                    g=1;
                    p=i+3;
                }
                else
                {
                    p=i+2;
                }
                for(j=p;j<l;j++)
                {
                    if(s[j]>='0'&&s[j]<='9')
                    {
                        sv=sv*10+(s[j]-48);
                    }
                    else if(s[j]=='.')
                    {
                        for(o=j+1;o<l;o++)
                        {

                            if(!(s[o]>='0'&&s[o]<='9'))
                               {

                                   break;
                               }
                               else
                               {
                                   cv++;
                               }
                        }
                    }
                    else if(s[j]=='V')
                    {
                        if(s[j-1]=='M')
                                   {
                                       r=1000000.00;
                                   }
                                   else if(s[j-1]=='m')
                                   {
                                       r=1.00/1000.00;
                                   }
                                   else if(s[j-1]=='k')
                                   {
                                       r=1000.00;
                                   }
                                   else
                                   {
                                       r=1.00;
                                   }
                        break;
                    }
                }
            }

            else if(s[i]=='P'&&s[i+1]=='=')
            {
               if(s[i+2]=='-')
                {
                    h=1;
                    p=i+3;
                }
                else
                {
                    p=i+2;
                }
                for(j=p;j<l;j++)
                {
                    if(s[j]>='0'&&s[j]<='9')
                    {
                        sp=sp*10+(s[j]-48);
                    }
                    else if(s[j]=='.')
                    {
                        for(o=j+1;o<l;o++)
                        {
                            if(!(s[o]>='0'&&s[o]<='9'))
                               {

                                   break;
                               }
                               else
                               {
                                   cp++;
                               }
                        }
                    }
                    else if(s[j]=='W')
                    {
                         if(s[j-1]=='M')
                                   {
                                       x=1000000.00;
                                   }
                                   else if(s[j-1]=='m')
                                   {
                                       x=1.00/1000.00;
                                   }
                                   else if(s[j-1]=='k')
                                   {
                                       x=1000.00;
                                   }
                                   else
                                   {
                                       x=1.00;
                                   }
                        break;
                    }
                }
            }
        }
            if(si>0)
            {
                si=(si/(pow(10,ci)))*q;
            if(f==1)
            {
                si=si*-1;
            }
            }
           if(sv>0)
           {
               sv=(sv/(pow(10,cv)))*r;
            if(g==1)
            {
                sv=sv*-1;
            }
           }
            if(sp>0)
            {
                sp=(sp/(pow(10,cp)))*x;
            if(h==1)
            {
                sp=sp*-1;
            }
            }
            printf("Problem #%lld\n",m);
            if(sp==0)
            {
                power=si*sv;
                if(power<0)
                {
                    power=power*-1.00;
                }
                printf("P=%.2lfW\n\n",power);
            }
            else if(si==0)
            {
                current=sp/sv;
                printf("I=%.2lfA\n\n",current);
            }
            else
            {
                voltage=sp/si;
                printf("U=%.2lfV\n\n",voltage);
            }

        m++;
    }

    return 0;
}
