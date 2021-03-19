#include<bits/stdc++.h>
using namespace std;
int n;
double frog[300][300],x[300],y[300];
int main()
{
  int tst=1;
  while(cin>>n)
  {
    if(n==0)
    {
      break;
    }
    else
    {
      for(int i=0;i<n;i++)
      {
        cin>>x[i]>>y[i];
        fill(frog[i],frog[i]+n+2,INT_MAX);
      }
      for(int i=0;i<n;i++)
      {
        for(int j=i+1;j<n;j++)
        {
          if(i==j)
          {
            frog[i][j]=0.00;
          }
          else
          {
            frog[i][j]=sqrt(((x[i]-x[j])*(x[i]-x[j]))+((y[i]-y[j])*(y[i]-y[j])));
            frog[j][i]=frog[i][j];
          }
        }
      }
      for(int k=0;k<n;k++)
      {
        for(int i=0;i<n;i++)
        {
          for(int j=0;j<n;j++)
          {
            frog[i][j]=min(frog[i][j],max(frog[i][k],frog[k][j]));
          }
        }
      }
      /*for(int i=0;i<n;i++)
      {
        for(int j=0;j<n;j++)
        {
          cout<<frog[i][j]<<" ";
        }
        cout<<endl;
      }*/
      cout<<"Scenario #"<<tst++<<endl;
      cout<<"Frog Distance = "<<fixed<<setprecision(3)<<frog[0][1]<<endl<<endl;
    }
  }
  return 0;
}
