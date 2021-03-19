#include<bits/stdc++.h>
#include<string>
using namespace std;
char ch[60][5];
long long tst;
stack<char>stc;
string s;
void postfix(int n)
{
    stc.push('(');
    for(int i=1; i<n; i++)
    {
        if(ch[i][0]=='(')
        {
            stc.push(ch[i][0]);
        }
        else if(ch[i][0]=='/'||ch[i][0]=='*')
        {
            if(stc.top()=='/'||stc.top()=='*')
            {
                    s.push_back(stc.top());
                    stc.pop();
            }
            stc.push(ch[i][0]);
        }
        else if(ch[i][0]=='+'||ch[i][0]=='-')
        {
            if(stc.top()=='+'||stc.top()=='-'||stc.top()=='*'||stc.top()=='/')
            {
                while(stc.top()=='+'||stc.top()=='-'||stc.top()=='*'||stc.top()=='/')
                {
                    s.push_back(stc.top());
                    stc.pop();
                }
            }
            stc.push(ch[i][0]);
        }
        else if(ch[i][0]==')')
        {
            while(stc.top()!='(')
            {
                s.push_back(stc.top());
                stc.pop();
            }
            stc.pop();
        }
        else
            s.push_back(ch[i][0]);
       // cout<<s<<endl;
    }
    stc.push(')');
    while(!stc.empty())
    {
        if(stc.top()!='('&&stc.top()!=')')
            s.push_back(stc.top());
        stc.pop();
    }
    cout<<s<<endl;
//printf("\n");
}
int main()
{
    scanf("%d\n",&tst);
    //getchar();
   while(tst--)
    {
        int i=1;
        char c;
        while(cin.getline(ch[i],60))
        {
            if(strlen(ch[i])==0)
                break;
            i++;
        }
        if(tst)
            printf("\n");
        postfix(i);
        s.clear();
    }
    return 0;
}
