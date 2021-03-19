#include<bits/stdc++.h>
using namespace std;
long long c,i,j,f1,f2,f3,f4;
vector<long long>v;
double x,y;
pair<double,double>p1[1000],p2[1000],p3[1000],p4[1000];
char s[10];
int main()
{
    double x1,y1,x2,y2;
    c=0;
    while(scanf("%s",s)!=EOF)
    {
        if(strcmp(s,"r")==0)
        {
            cin>>x1>>y1>>x2>>y2;
            p1[c].first=x1;
            p1[c].second=y1;
            p2[c].first=x2;
            p2[c].second=y2;
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
            for(i=0; i<c; i++)
            {
                if(x>p1[i].first&&x<p2[i].first)
                {
                    if(y>p2[i].second&&y<p1[i].second)
                    {
                        //cout<<i<<endl;
                        //cout<<"point"<<endl;
                        v.push_back(i+1);
                    }
                }
            }
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
