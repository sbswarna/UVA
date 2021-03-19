#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<long long>dq;
    vector<long long>v;
    long long i,n,p,l;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
            break;
        if(n==1)
        {
            printf("Discarded cards:\n");
            printf("Remaining card: 1\n");
        }
        else if(n==2)
        {
            printf("Discarded cards: 1\n");
            printf("Remaining card: 2\n");
        }
        else if(n==3)
        {
            printf("Discarded cards: 1, 3\n");
            printf("Remaining card: 2\n");
        }
        else
        {
            for(i=2; i<=n; i=i+2)
            {
                dq.push_back(i);
            }
            if(n%2!=0)
            {
                while(dq.size()!=1)
                {

                    dq.push_back(dq.front());
                    dq.pop_front();
                    l=dq.front();
                    //cout<<"l="<<l<<endl;
                    v.push_back(l);
                    dq.pop_front();
                    //cout<<dq.front()<<endl;
                }
            }
            else
            {
                while(dq.size()!=1)
                {
                    l=dq.front();
                    //cout<<"l="<<l<<endl;
                    v.push_back(l);
                    dq.pop_front();
                    // cout<<dq.front()<<endl;
                    dq.push_back(dq.front());
                    dq.pop_front();

                }
            }
            printf("Discarded cards: ");
            for(i=1; i<=n; i=i+2)
            {
                printf("%lld, ",i);
            }
            for(i=0; i<v.size(); i++)
            {
                cout<<v[i];
                if(i!=v.size()-1)
                {
                    cout<<", ";
                }
            }
            cout<<endl;
            printf("Remaining card: ");
            cout<<dq.front()<<endl;
            dq.clear();
            v.clear();
        }
    }
    return 0;
}
