#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,j,p,l1,l2,c;
    char s1[100000],s2[100000];
    while(scanf("%s%s",s1,s2)!=EOF)
    {
        l1=strlen(s1);
        l2=strlen(s2);
        c=0;
        p=0;
        i=0;
        while(i<l1)
        {

            for(j=p;j<l2;j++)
            {
                if(s1[i]==s2[j])
                {
                    p=j+1;
                    //printf("%c %c\n",s1[i],s2[j]);
                    c++;
                    s1[i]='1';
                }

            }
            i++;


        }
        if(c==l1)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }

    return 0;
}
