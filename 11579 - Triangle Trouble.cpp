#include<bits/stdc++.h>
using namespace std;
double i,n,a,ar,s,area,t;
vector<double>v;
int main()
{
    cin>>t;
    while(t--)
    {
        scanf("%lf",&n);
        v.clear();
        for(i=0; i<n; i++)
        {
            scanf("%lf",&a);
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        /* for(i=0;i<n;i++)
             cout<<v[i]<<" ";
         cout<<endl;*/
        area=-1;
        for(i=2; i<n; i++)
        {
            s=0;
            if((v[i]+v[i-1]>v[i-2])&&(v[i-1]+v[i-2]>v[i])&&(v[i-2]+v[i]>v[i-1]))
            {
                s=s+v[i]+v[i-1]+v[i-2];
                s=s/2.00;
                ar=pow((s*(s-v[i])*(s-v[i-1])*(s-v[i-2])),0.5);
                area=max(area,ar);
            }
        }
        if(area!=-1)
            printf("%.2lf\n",area);
        else
            cout<<"0.00"<<endl;
    }
    return 0;
}
