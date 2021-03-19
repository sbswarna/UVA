#include<bits/stdc++.h>
using namespace std;
long long c,i,j,f1,f2,f3,f4;
vector<long long>v;
double x,y;
pair<string,pair<double,double> >p1[1000],p2[1000];
vector<double>a;
string s;
int main()
{
    double x1,y1,x2,y2;
    c=0;
    while(cin>>s)
    {
        if(s=="r")
        {
            cin>>x1>>y1>>x2>>y2;
            p1[c].first=(s);
            p1[c].second.first=x1;
            p1[c].second.second=y1;
            p2[c].first=(s);
            p2[c].second.first=x2;
            p2[c].second.second=y2;
            c++;
        }
        else if(s=="c")
        {
            cin>>x1>>y1>>x2;
            //cout<<x1<<" "<<y1<<" "<<x2<<endl;
            p1[c].first=(s);
            p1[c].second.first=x1;
            p1[c].second.second=y1;
            a.push_back(x2);
            c++;
        }
        else
        {
            break;
        }
    }
    long long tst=1;
    while(scanf("%lf%lf",&x,&y)==2)
    {
        if(x<9999.9&&y<9999.9)
        {
            long long k=0;
            for(i=0; i<c; i++)
            {
                if(p1[i].first=="r")
                {
                    if(x>p1[i].second.first&&x<p2[i].second.first)
                    {
                        if(y>p2[i].second.second&&y<p1[i].second.second)
                        {
                            v.push_back(i+1);
                        }
                    }
                }
                else
                {
                    double z1,z2;
                    z1=p1[i].second.first;
                    z2=p1[i].second.second;
                    double rd=sqrt(((x-z1)*(x-z1))+((y-z2)*(y-z2)));
                    if(rd<a[k])
                    {
                        v.push_back(i+1);
                    }
                    k++;
                }
            }
            //cout<<"size="<<v.size()<<endl;
            if(v.size()==0)
            {
                cout<<"Point "<<tst<<" is not contained in any figure"<<endl;
            }
            for(j=0; j<v.size(); j++)
            {
                cout<<"Point "<<tst<<" is contained in figure "<<v[j]<<endl;
            }
            tst++;
            v.clear();
        }
        else
        {
            break;
        }
    }
    v.clear();
    return 0;
}
