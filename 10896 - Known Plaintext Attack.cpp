#include<bits/stdc++.h>
using namespace std;
long long tst,i,j,k,l1,l2;
string t[100];
vector<char>st;
char s1[100],s2[20];
int main()
{
    cin>>tst;
    getchar();
    while(tst--)
    {
        cin.getline(s1,100);
        cin.getline(s2,20);
        long long l1=strlen(s1);
        long long l2=strlen(s2);
        long long k=0;
        for(i=0; i<l1; i=j+1)
        {
            for(j=i; j<l1; j++)
            {
                if(s1[j]==' ')
                    break;
                else
                {
                    t[k].push_back(s1[j]);
                }
            }
            k++;
        }
        for(i=0; i<k; i++)
        {
            if(t[i].size()==l2)
            {
                long long x=(t[i][0]-'a')+1;
                //cout<<"x="<<x<<endl;
                long long y=(s2[0]-'a')+1;
                //cout<<"y="<<y<<endl;
                long long p;
                if(y>x)
                {
                    p=y-x;
                }
                else
                {
                    p=26-x+y;
                }
                //cout<<"p="<<p<<endl;
                long long f=0,d;
                for(j=0; j<t[i].size(); j++)
                {
                    x=(t[i][j]-'a')+1+p;
                    d=x-((t[i][j]-'a')+1);
                    if(x>26)
                    {
                        x=x-26;
                    }
                    //cout<<"x+p="<<x<<endl;
                    if(x==(s2[j]-'a'+1))
                    {
                        f=0;
                    }
                    else
                    {
                        f=1;
                        break;
                    }
                }
                if(f==0)
                {
                    char ch1=(26-d)+'a';
                    st.push_back(ch1);
                }
            }
        }
        sort(st.begin(),st.end());
        for(i=0; i<st.size(); i++)
        {
            cout<<st[i];
        }
        cout<<endl;
        for(i=0; i<100; i++)
            t[i].clear();
        st.clear();
    }
    return 0;
}
