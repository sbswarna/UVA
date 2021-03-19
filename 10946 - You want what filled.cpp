#include<bits/stdc++.h>
using namespace std;
long long i,j,c,row,col,l,d,mx,tst;
struct alpha
{
    long long v[3000];
    string b;
} a[2];
char s[55][55],p,q;
long long floodfill(long long i,long long j)
{
    if(s[i][j]!=p||i>=row||j>=col||i<0||j<0)
        return 0;
    else
    {
        c++;
        s[i][j]='.';
        floodfill(i,j+1);
        floodfill(i,j-1);
        floodfill(i+1,j);
        floodfill(i-1,j);
        return c;
    }
}
int main()
{
    tst=1;
    while(scanf("%lld%lld",&row,&col)==2)
    {
        getchar();
        if(row==0&&col==0)
        {
            break;
        }
        else
        {
            d=0;
            for(i=0; i<row; i++)
            {
                for(j=0; j<col; j++)
                {
                    cin>>s[i][j];
                }
            }
            for(i=0; i<row; i++)
            {
                for(j=0; j<col; j++)
                {
                    if(s[i][j]!='.')
                    {
                        c=0;
                        p=s[i][j];
                        l=floodfill(i,j);
                        a[0].v[d]=l;
                        a[0].b[d]=(p);
                        d++;
                    }
                }
            }
            a[0].b[d]='\0';
              for(i=0;i<d;i++)
              {
                  for(j=i+1;j<d;j++)
                  {
                      if(a[0].v[i]<a[0].v[j])
                      {
                          swap(a[0].v[i],a[0].v[j]);
                          swap(a[0].b[i],a[0].b[j]);
                      }
                      else if(a[0].v[i]==a[0].v[j])
                      {
                          if(a[0].b[i]>a[0].b[j])
                          {
                            swap(a[0].b[i],a[0].b[j]);
                          }
                      }
                  }
              }
              printf("Problem %lld:\n",tst);
              for(i=0;i<d;i++)
              {
                  cout<<a[0].b[i]<<" "<<a[0].v[i]<<endl;
              }
        }
        tst++;
    }
    return 0;
}
