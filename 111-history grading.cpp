#include<bits/stdc++.h>
using namespace std;
long long n,m,i,j,sm,l,a[22],row=0,b[22][22],c[10000][22];
char s[1000];
int main()
{
    while(!cin.eof())
    {
        cin.getline(s,1000);
        l=strlen(s);
        //cout<<"l="<<l<<endl;
        if(l==0)
            continue;
        else
        {

            if(l==1||l==2)
            {
                n=atoll(s);
                //cout<<"row="<<row<<endl;
                row=0;
                //cout<<"n="<<n<<endl;
            }
            else
            {
                m=1;
                memset(b,0,sizeof(b));
                for(i=0; i<l; i=j+1)
                {
                    sm=0;
                    for(j=i; j<l; j++)
                    {
                        if(s[j]==' ')
                        {
                            break;
                        }
                        else
                        {
                            sm=sm*10+(s[j]-48);
                        }
                    }
                    a[m]=sm;
                    m++;
                }
                for(i=1;i<m;i++)
                {
                    c[row][a[i]]=i;
                }
            /*for(i=1;i<m;i++)
                {
                    cout<<c[row][i]<<" ";
                }
                cout<<endl;*/
                if(row>=1)
                {
                    for(i=1; i<m; i++)
                    {
                        for(j=1; j<m; j++)
                        {
                            if(c[row][j]==c[0][i])
                            {
                                //cout<<"matched="<<i<<" "<<j<<endl;
                                b[i][j]=b[i-1][j-1]+1;
                            }
                            else
                            {
                                b[i][j]=max(b[i-1][j],b[i][j-1]);
                            }
                        }
                    }
                    cout<<b[m-1][m-1]<<endl;

                }
                row++;
            }
        }
    }
    return 0;
}

