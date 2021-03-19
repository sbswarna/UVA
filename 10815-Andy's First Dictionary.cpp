#include<bits/stdc++.h>
using namespace std;
long long i,j;
set<string>st;
string t;
char s[5005][204];
int main()
{
    int k=0;
    while(cin.getline(s[k],5005))
    {
        long long l=strlen(s[k]);
        for(i=0; i<l; i=j+1)
        {
            for(j=i; j<l; j++)
            {
                if(s[k][j]>='A'&&s[k][j]<='Z')
                {
                    t.push_back(s[k][j]-'A'+'a');
                }
                else if(s[k][j]>='a'&&s[k][j]<='z')
                {
                    t.push_back(s[k][j]);
                }
                else
                    break;
            }
            if(t.size()>0)
            {
                st.insert(t);
            }
            t.clear();
        }
        k++;
    }
    set<string>::iterator it;
    for(it=st.begin(); it!=st.end(); it++)
    {
        cout<<(*it)<<endl;
    }
    st.clear();
    return 0;
}
