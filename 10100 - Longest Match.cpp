#include<bits/stdc++.h>
using namespace std;
long long l1,l2,i,j,lcs[1004][1004],m;
char s1[1002],s2[1002];
string s[1002],t[1002];
int main()
{
    m=1;
    while(!cin.eof())
    {
        memset(lcs,0,sizeof(lcs));
        cin.getline(s1,1002);
        cin.getline(s2,1002);
        l1=strlen(s1);
        l2=strlen(s2);
        printf("%2lld. ",m);
        m++;
        if(l1==0||l2==0)
        {
            printf("Blank!\n");
        }
        //cout<<l1<<" "<<l2<<endl;
        else
        {
            long long d=1,i,j;
            for(i=0; i<l1; i=j+1)
            {
                //cout<<i<<endl;
                for(j=i; j<l1; j++)
                {
                    if((s1[j]>='A'&&s1[j]<='Z')||(s1[j]>='a'&&s1[j]<='z')||(s1[j]>='0'&&s1[j]<='9'))
                    {
                        s[d].push_back(s1[j]);
                    }
                    else
                    {
                        if((s1[j+1]>='A'&&s1[j+1]<='Z')||(s1[j+1]>='a'&&s1[j+1]<='z')||(s1[j+1]>='0'&&s1[j]<='9'))
                        {
                            d++;
                        }
                        break;
                    }
                }
            }
            /*for(i=0;i<=d;i++)
            {
                cout<<s[i]<<endl;
            }*/
            long long e=1;
            for(i=0; i<l2; i=j+1)
            {
                //cout<<i<<endl;
                for(j=i; j<l2; j++)
                {
                    if((s2[j]>='A'&&s2[j]<='Z')||(s2[j]>='a'&&s2[j]<='z')||(s2[j]>='0'&&s2[j]<='9'))
                    {
                        t[e].push_back(s2[j]);
                    }
                    else
                    {
                        if((s2[j+1]>='A'&&s2[j+1]<='Z')||(s2[j+1]>='a'&&s2[j+1]<='z')||(s2[j+1]>='0'&&s2[j+1]<='9'))
                        {
                            e++;
                        }

                        break;
                    }
                }
            }
            /* for(i=0;i<=e;i++)
             {
                 cout<<t[i]<<endl;
             }
             cout<<d<<" "<<e<<endl;*/
            for(i=1; i<=d; i++)
            {
                for(j=1; j<=e; j++)
                {
                    if((s[i]==t[j])&&s[i].size()!=0&&t[j].size()!=0)
                    {
                        lcs[i][j]=lcs[i-1][j-1]+1;
                    }
                    else
                    {
                        lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
                    }
                }
            }
            cout<<"Length of longest match: "<<lcs[d][e]<<endl;
            for(i=0; i<1002; i++)
            {
                s[i].clear();
                t[i].clear();
            }
        }
    }
    return 0;
}
