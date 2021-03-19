#include<bits/stdc++.h>
using namespace std;
long long i,j,k,tst;
string t;
char s[300];
double p,x,y;
int main()
{
    tst=1;
    while(scanf("%s",s)!=EOF)
    {
        if(strcmp(s,"END")==0)
            break;
        else
        {
            x=0;
            y=0;
            for(i=0; i<strlen(s); i=k+1)
            {
                p=0;
                t.clear();
                for(j=i; j<strlen(s); j++)
                {
                    if(s[j]>='0'&&s[j]<='9')
                    {
                        p=p*10+(s[j]-48);
                    }
                    else
                    {
                        for(k=j; k<strlen(s); k++)
                        {
                            if(!(s[k]>='A'&&s[k]<='Z'))
                                break;
                            else
                                t.push_back(s[k]);
                        }
                        break;
                    }
                }
                if(t=="N")
                {
                    y=y+p;
                }
                else if(t=="S")
                {
                    y=y-p;
                }
                else if(t=="E")
                {
                    x=x+p;
                }
                else if(t=="W")
                {
                    x=x-p;
                }
                else
                {
                    p=sqrt(2*p*p)/2;
                    if(t=="NE")
                    {
                        x=x+p;
                        y=y+p;
                    }
                    else if(t=="NW")
                    {
                        x=x-p;
                        y=y+p;
                    }
                    else if(t=="SW")
                    {
                        x=x-p;
                        y=y-p;
                    }
                    else if(t=="SE")
                    {
                        x=x+p;
                        y=y-p;
                    }
                }
                //cout<<p<<" "<<t<<endl;
            }
            printf("Map #%lld\n",tst);
            printf("The treasure is located at (%.3lf,%.3lf).\n",x,y);
            double ans=sqrt((x*x)+(y*y));
            printf("The distance to the treasure is %.3lf.\n",ans);
            cout<<endl;
            tst++;
        }
    }
    return 0;
}
