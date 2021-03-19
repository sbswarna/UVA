#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long tst;
    double x1,y1,a1,a2,b1,b2,p1,p2,p3,p4,q1,q2,q3,q4,x2,y2;
    cin>>tst;
    while(tst--)
    {
        cin>>x1>>y1>>x2>>y2>>a1>>b1>>a2>>b2;
        double a,b,c,d;
        if(a1>a2)
        {
            a=a2;
            b=a1;
        }
        else
        {
            a=a1;
            b=a2;
        }
        if(b1>b2)
        {
            c=b1;
            d=b2;
        }
        else
        {
            c=b2;
            d=b1;
        }
       // printf("a=%.3lf b=%.3lf c=%.3lf d=%.3lf\n",a,b,c,d);
        long long f=0;
        double m,n;
        if(x1>=a&&x1<=b&&x2>=a&&x2<=b&&y1>=d&&y1<=c&&y2>=d&&y2<=c)
        {
            f=1;
        }
        if(x1==x2&&y1==y2)
        {
            if(x1>=a&&x1<=b&&y1>=d&&y1<=c)
            {
                f=1;
            }
        }
        else
        {
            m=(y1-y2);
            n=(x1-x2);
            if(y1!=y2)
            {
                q1=b1;
                p1=((((q1-y1)/(m))*n)+x1);
                if(p1>=a&&p1<=b&&q1>=d&&q1<=c)
                {
                    double x,y,z;
                    x=pow((((x1-p1)*(x1-p1))+((y1-q1)*(y1-q1))),0.5);
                    y=pow((((x2-p1)*(x2-p1))+((y2-q1)*(y2-q1))),0.5);
                    z=pow((((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2))),0.5);
                    if(x<=z&&y<=z)
                    f=1;
                }
                //printf("%.3lf %.3lf\n",p1,q1);
                //cout<<f<<endl;
            }
            if(x1!=x2)
            {
                p2=a2;
                q2=((((p2-x1)/n)*m)+y1);
                if(p2>=a&&p2<=b&&q2>=d&&q2<=c)
                {
                    double x,y,z;
                    x=pow((((x1-p2)*(x1-p2))+((y1-q2)*(y1-q2))),0.5);
                    y=pow((((x2-p2)*(x2-p2))+((y2-q2)*(y2-q2))),0.5);
                    z=pow((((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2))),0.5);
                    if(x<=z&&y<=z)
                    f=1;
                }
               // printf("%.3lf %.3lf\n",p2,q2);
                //cout<<f<<endl;

            }
            if(y1!=y2)
            {
                q3=b2;
                p3=((((q3-y1)/(m))*n)+x1);
                if(p3>=a&&p3<=b&&q3>=d&&q3<=c)
                {
                    double x,y,z;
                    x=pow((((x1-p3)*(x1-p3))+((y1-q3)*(y1-q3))),0.5);
                    y=pow((((x2-p3)*(x2-p3))+((y2-q3)*(y2-q3))),0.5);
                    z=pow((((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2))),0.5);
                    if(x<=z&&y<=z)
                    f=1;
                }
               // printf("%.3lf %.3lf\n",p3,q3);
                //cout<<f<<endl;

            }
            if(x1!=x2)
            {
                p4=a1;
                q4=((((p4-x1)/n)*m)+y1);

                if(p4>=a&&p4<=b&&q4>=d&&q4<=c)
                {
                    double x,y,z;
                    x=pow((((x1-p4)*(x1-p4))+((y1-q4)*(y1-q4))),0.5);
                    y=pow((((x2-p4)*(x2-p4))+((y2-q4)*(y2-q4))),0.5);
                    z=pow((((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2))),0.5);
                    if(x<=z&&y<=z)
                    f=1;
                }
               // printf("%.3lf %.3lf\n",p4,q4);
                //cout<<f<<endl;
            }
        }

        if(f==1)
        {
            cout<<"T"<<endl;
        }
        else
        {
            cout<<"F"<<endl;
        }
    }
    return 0;
}
