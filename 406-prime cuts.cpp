#include<bits/stdc++.h>
using namespace std;
long long prime[1004],i,j,n,c;
vector<long long>v[1004];
int main()
{
    memset(prime,0,sizeof(prime));
    prime[0]=1;
    prime[1]=0;
    for(i=4; i<=1002; i=i+2)
    {
        prime[i]=1;
    }
    for(i=3; i<=sqrt(1002); i=i+2)
    {
        if(prime[i]==0)
        {
            for(j=i*i; j<=1002; j=j+i)
            {
                prime[j]=1;
            }
        }
    }
    for(i=1; i<=1002; i++)
    {
        for(j=1; j<=i; j++)
        {
            if(prime[j]==0)
            {
                v[i].push_back(j);
            }
        }
    }
    while(scanf("%lld%lld",&n,&c)==2)
    {
        cout<<n<<" "<<c<<": ";
        if(2*c>=v[n].size()||(2*c)-1>=v[n].size())
        {
            for(i=0; i<v[n].size(); i++)
            {
                cout<<v[n][i];
                if(i!=v[n].size()-1)
                    cout<<" ";
                else
                    cout<<endl;
            }

        }
        else
        {
            if(v[n].size()%2==0)
            {
                for(i=v[n].size()/2-c; i<v[n].size()/2; i++)
                {
                    cout<<v[n][i]<<" ";
                }
                for(i=v[n].size()/2; i<(v[n].size()/2)+c; i++)
                {
                    cout<<v[n][i];
                    if(i!=(v[n].size()/2)+c-1)
                        cout<<" ";
                    else
                        cout<<endl;
                }
            }
            else
            {
                if(c==1)
                {
                    cout<<v[n][(v[n].size()/2)]<<endl;;
                }
                else
                {
                    for(i=v[n].size()/2-c+1; i<(v[n].size()/2)+1; i++)
                    {
                        cout<<v[n][i];
                        if(i==(v[n].size()/2)+1)
                        {
                            cout<<endl;
                        }
                        else
                            cout<<" ";
                    }

                    cout<<v[n][(v[n].size()/2)+1];
                    if((2*c)-1==3)
                        cout<<endl;
                    else
                        cout<<" ";
                    for(i=(v[n].size()/2)+2; i<(v[n].size()/2)+c; i++)
                    {
                        cout<<v[n][i];
                        if(i!=(v[n].size()/2)+c-1)
                            cout<<" ";
                        else
                            cout<<endl;
                    }
                }
            }
        }
        cout<<endl;
    }
    return 0;
}
