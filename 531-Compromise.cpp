#include<bits/stdc++.h>
using namespace std;
string s,s1[101],s2[101],s3[101];
long long e,d,i,lcs[102][102],j,f;
int main()
{
    while(!cin.eof())
    {
        memset(lcs,0,sizeof(lcs));
        d=1;
        while(cin>>s)
        {
            if(s=="#")
            {
                break;
            }
            else
            {
                s1[d]=s;
                d++;
            }
        }
        e=1;
        while(cin>>s)
        {
            if(s=="#")
            {
                break;
            }
            else
            {
                s2[e]=s;
                e++;
            }
        }
        f=0;
        for(i=1; i<d; i++)
        {
            for(j=1; j<e; j++)
            {
                if(s1[i]==s2[j])
                {
                    lcs[i][j]=lcs[i-1][j-1]+1;
                }
                else
                {
                    lcs[i][j]=max(lcs[i-1][j],lcs[i][j-1]);
                }
            }
        }
        //cout<<lcs[d-1][e-1]<<endl;
        //LCS printing :://
        i=d-1;
        j=e-1;
        while(i>0&&j>0)
        {
            if(s1[i]==s2[j])
            {
                s3[f]=s1[i];
                f++;
                i--;
                j--;
            }
            else
            {
                if(lcs[i][j-1]>lcs[i-1][j])
                {
                    j--;
                }
                else
                {
                    i--;
                }
            }
        }
        for(i=f-1; i>=0; i--)
        {
            cout<<s3[i];
            if(i!=0)
            {
                cout<<" ";
            }
            else
                cout<<endl;
        }
        s.clear();
        for(i=0; i<100; i++)
        {
            s1[i].clear();
            s2[i].clear();
            s3[i].clear();
        }
    }
    return 0;
}
