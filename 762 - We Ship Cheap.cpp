#include<bits/stdc++.h>
using namespace std;
long long tst,i,n,visited[100000];
queue<long long>q;
vector<long long>v[100000],direction;
map<string,long long>mp;
map<long long,string>MP;
string s1,s2;
int main()
{
    tst=1;
    while(scanf("%lld",&n)==1)
    {
        if(tst!=1)
        {
            cout<<endl;
        }
        tst++;

        long long c=1;
        for(i=1; i<=n; i++)
        {
            cin>>s1>>s2;
            if(mp.find(s1)==mp.end())
            {
                mp[s1]=c;
                MP[c]=s1;
                c++;
            }
            if(mp.find(s2)==mp.end())
            {
                mp[s2]=c;
                MP[c]=s2;
                c++;
            }
            v[mp[s1]].push_back(mp[s2]);
            v[mp[s2]].push_back(mp[s1]);
        }
        /*printf("string->int\n");
        map<string,long long int>::iterator it;
        for(it=mp.begin(); it!=mp.end(); it++)
        {
            cout<<(*it).first<<" "<<(*it).second<<endl;
        }
        printf("int->string\n");
         map<long long int,string>::iterator it1;
        for(it1=MP.begin(); it1!=MP.end(); it1++)
        {
            cout<<(*it1).first<<" "<<(*it1).second<<endl;
        }*/
        cin>>s1>>s2;
        long long f=0;
        if(mp.find(s1)==mp.end())
        {
            f=1;
        }
        if(mp.find(s2)==mp.end())
        {
            f=1;
        }
        if(f==1)
        {
            cout<<"No route"<<endl;
        }
        else
        {
            memset(visited,-1,sizeof(visited));
            q.push(mp[s1]);
            visited[mp[s1]]=0;
            while(!q.empty())
            {
                long long l=q.front();
                q.pop();
                for(i=0; i<v[l].size(); i++)
                {
                    if(visited[v[l][i]]==-1)
                    {
                        q.push(v[l][i]);
                        visited[v[l][i]]=visited[l]+1;
                    }
                }
            }
            if(visited[mp[s2]]==-1)
            {
                cout<<"No route"<<endl;
            }
            else
            {
                long long a=mp[s1];
                long long b=mp[s2];
                direction.push_back(b);
                while(b!=a)
                {
                    for(i=0; i<v[b].size(); i++)
                    {
                        if(visited[b]-1==visited[v[b][i]])
                        {
                            direction.push_back(v[b][i]);
                            break;
                        }
                    }
                    b=v[b][i];
                }
                for(i=direction.size()-1; i>=1; i--)
                {
                    cout<<MP[direction[i]]<<" "<<MP[direction[i-1]]<<endl;
                }
            }
        }
        mp.clear();
        MP.clear();
        for(i=0; i<100000; i++)
            v[i].clear();
        direction.clear();
    }
    return 0;
}
