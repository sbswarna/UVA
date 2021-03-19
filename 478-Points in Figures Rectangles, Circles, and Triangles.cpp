#include<bits/stdc++.h>
using namespace std;
long long c,i,j,f1,f2,f3,f4;
vector<long long>v;
double x,y;
pair<string,pair<double,double> >p1[1000],p2[1000],p3[1000];
vector<double>a;
string s;
int main()
{
    double x1,y1,x2,y2,x3,y3;
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
            p1[c].first=(s);
            p1[c].second.first=x1;
            p1[c].second.second=y1;
            a.push_back(x2);
            c++;
        }
        else if(s=="t")
        {
            cin>>x1>>y1>>x2>>y2>>x3>>y3;
            p1[c].first=(s);
            p1[c].second.first=x1;
            p1[c].second.second=y1;
            p2[c].first=(s);
            p2[c].second.first=x2;
            p2[c].second.second=y2;
            p3[c].first=(s);
            p3[c].second.first=x3;
            p3[c].second.second=y3;
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
                else if(p1[i].first=="c")
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
                else
                {
                    double z1,w1,z2,w2,z3,w3,area,area1,area2,area3,s1,s2,s3,s,a1,a2,a3,b1,b2,b3;
                    z1=p1[i].second.first;
                    w1=p1[i].second.second;
                    z2=p2[i].second.first;
                    w2=p2[i].second.second;
                    z3=p3[i].second.first;
                    w3=p3[i].second.second;
                    s1=sqrt(pow((z1-z2),2)+pow((w1-w2),2));
                    s2=sqrt(pow((z2-z3),2)+pow((w2-w3),2));
                    s3=sqrt(pow((z1-z3),2)+pow((w1-w3),2));
                    s=(s1+s2+s3)/2.00;
                    area=sqrt(s*(s-s1)*(s-s2)*(s-s3));
                    a1=sqrt(pow((z1-x),2)+pow((w1-y),2));
                    a2=sqrt(pow((z2-x),2)+pow((w2-y),2));
                    a3=sqrt(pow((z3-x),2)+pow((w3-y),2));
                    b1=(a1+a2+s1)/2.00;
                    area1=sqrt(b1*(b1-a1)*(b1-a2)*(b1-s1));
                    b2=(a2+a3+s2)/2.00;
                    area2=sqrt(b2*(b2-a2)*(b2-a3)*(b2-s2));
                    b3=(a1+a3+s3)/2.00;
                    area3=sqrt(b3*(b3-a1)*(b3-a3)*(b3-s3));
                    double t=area1+area2+area3;
                    if(abs(t-area)<=pow(10,-6))
                        v.push_back(i+1);
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
    return 0;
}
/*
t -1.0 -1.0 10.1 2.2 .4 1.4
t 20.3 9.8 10.0 -3.2 17.5 -7.7
t -10.0 -10.0 10.0 25.0 30.0 -10.0
*
2.0 2.0
4.7 5.3
6.9 11.2
20.0 20.0
17.6 3.2
-5.2 -7.8
9999.9 9999.9
*/
