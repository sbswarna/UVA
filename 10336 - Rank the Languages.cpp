#include<bits/stdc++.h>
using namespace std;
long long i,j,m,tst,row,col,c,a[27];
char p;
char s[505][505];
vector<long long>v;
vector<char>v1;
void floodfill(long long i,long long j)
{
    if(s[i][j]!=p||i<0||j<0||i>=row||j>=col)
        return;
    else
    {
        s[i][j]='.';
        floodfill(i,j-1);
        floodfill(i-1,j);
        floodfill(i+1,j);
        floodfill(i,j+1);
    }
}
int main()
{
    cin>>tst;
    m=1;
    while(m<=tst)
    {
        memset(a,0,sizeof(a));
        cin>>row>>col;
        c=0;
        getchar();
        for(i=0; i<row; i++)
        {
            cin>>s[i];
        }
        for(i=0; i<row; i++)
        {
            for(j=0; j<col; j++)
            {
                if(s[i][j]>='a'&&s[i][j]<='z')
                {
                    p=s[i][j];
                    floodfill(i,j);
                    a[p-'a']++;
                }
            }
        }
        for(i=0; i<=26; i++)
        {
            if(a[i]!=0)
            {
                v.push_back(a[i]);
                v1.push_back(i+'a');
            }
        }
        for(i=0; i<v.size(); i++)
        {
            for(j=i+1; j<v.size(); j++)
            {
                if(v[i]<v[j])
                {
                    swap(v[i],v[j]);
                    swap(v1[i],v1[j]);
                }
                else if(v[i]==v[j])
                {
                    if(v1[i]>v1[j])
                    {
                        swap(v1[i],v1[j]);
                    }
                }
            }
        }
        printf("World #%lld\n",m);
        for(i=0; i<v.size(); i++)
        {
            cout<<v1[i]<<": "<<v[i]<<endl;
        }
        v.clear();
        v1.clear();
        m++;
    }
    return 0;
}
