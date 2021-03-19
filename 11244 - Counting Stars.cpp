#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
long long c=0,i,j,m,n,t,p,star;
char s[1000][1000];
long long war(long long i,long long j)
{
    if(s[i][j]=='.'||i>=n||j>=m||i<0||j<0)
    {
        return 0;
    }
    else
	{
		c++;
	s[i][j]='.';
    war(i-1,j+1);
    war(i+1,j-1);
    war(i+1,j+1);
    war(i-1,j-1);
    war(i,j+1);
    war(i,j-1);
    war(i+1,j);
    war(i-1,j);
    return c;
}
}
int main()
{
    while(scanf("%lld%lld",&n,&m)==2)
    {
    	if(n==0&&m==0)
    	{
    		break;
		}
        else
		{
		c=0;
        star=0;
        getchar();
        for(i=0; i<n; i++)
        {
        	scanf("%s",s[i]);
        }

        for(i=0; i<n; i++)
        {
            for(j=0; j<m; j++)
            {
            	c=0;
                if(s[i][j]=='*')
                {
                    p=war(i,j);
                    if(p==1)
                    {
                    	star++;
					}
                }
            }
        }
        printf("%lld\n",star);
}
}

    return 0;
}
