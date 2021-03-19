#include<bits/stdc++.h>
using namespace std;
struct node
{
    int endmark;
    node* next[20];
    node()
    {
        endmark = 0;
        for (int i = 0; i < 20; i++)
            next[i] = NULL;
    }
} * root;
void insert(char* str, int len)
{
    node* curr = root;
    for (int i = 0; i < len; i++)
    {
        int id = str[i] - '0';
        if (curr->next[id] == NULL)
            curr->next[id] = new node();
        curr = curr->next[id];
    }
    curr->endmark++;
}
int search(char* str, int len)
{
    node* curr = root;
    int f=0;
    for (int i = 0; i < len; i++)
    {
        int id = str[i] - '0';
        if(curr->endmark)
        {
            f=1;
            break;
        }
        curr = curr->next[id];
    }
    if(f==0)
    {
        if((curr->endmark)>1)
        {
            f=1;
        }
    }
    return f;
}
void del(node* cur)
{
    for (int i = 0; i <20; i++)
        if (cur->next[i])
            del(cur->next[i]);

    delete (cur);
}
int main()
{
    int tst,i,n;
    cin>>tst;
    while(tst--)
    {
        root = new node();
        cin >> n;
        char str[10002][12];
        for (i = 0; i < n; i++)
        {
            cin>>str[i];
            insert(str[i], strlen(str[i]));
        }
        int p=0;
        for(i=0; i<n; i++)
        {
            p=search(str[i], strlen(str[i]));
            if(p==1)
                break;
        }
        if(p==1)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
        del(root);
    }
    return 0;
}

