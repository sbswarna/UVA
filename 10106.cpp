#include<bits/stdc++.h>
using namespace std;
char s1[1000],s2[1000];
long long i,l1,l2;
string s,t;
int main()
{
	while(scanf("%s%s",s1,s2)!=EOF)
	{
		l1=strlen(s1);
		l2=strlen(s2);
		long long q=0,p,n;
		for(i=l2-1;i>=0;i--)
		{
			p=((s1[l1-1]-48)*(s2[i]-48))+q;
			//cout<<p<<endl;
			if(p>9)
			{
				n=p%10;
				q=p/10;
			}
			else
			{
				n=p;
				q=0;
			}
			//cout<<q<<endl;
			s.push_back(n+48);
		}
		if(p>9)
		{
			s.push_back(q+48);
		}
		//cout<<s<<endl;
		long long j,k=1;
		long long l;
		for(i=l1-2;i>=0;i--)
		{
			q=0;
			for(j=l2-1;j>=0;j--)
			{
				p=((s1[i]-48)*(s2[j]-48))+q;
			//cout<<p<<endl;
			if(p>9)
			{
				n=p%10;
				q=p/10;
			}
			else
			{
				n=p;
				q=0;
			}
			//cout<<q<<endl;
			t.push_back(n+48);
			}
			//cout<<q<<endl;
			if(p>9)
			{
				t.push_back(q+48);
			}
			for(l=1;l<=k;l++)
			{
				t="0"+t;
			}
			long long l3=s.size();
			long long l4=t.size();
			if(l3<l4)
			{
				for(l=l3;l<l4;l++)
				{
					s=s+"0";
				}
			}
		//cout<<s<<endl;
		//cout<<t<<endl;
			q=0;
			string r;
			for(l=0;l<l4;l++)
			{
				p=((s[l]-48)+(t[l]-48))+q;
				if(p>9)
				{
					n=p%10;
					q=p/10;
				}
				else
				{
					n=p;
					q=0;
				}
				r.push_back(n+48);
			}
			if(p>9)
			{
				r.push_back(q+48);
			}
			//cout<<r<<endl;
			s=r;
			t.clear();
			r.clear();
			k++;
		}
		j=-1;
		for(i=s.size()-1;i>=0;i--)
		{
			if(s[i]!='0')
			{
				j=i;
				break;
			}
		}
		//cout<<j<<endl;
		if(j==-1)
		{
			cout<<0<<endl;
		}
		else
		{
		for(i=j;i>=0;i--)
		cout<<s[i];
		cout<<endl;
		}
		s.clear();
	}
	return 0;
}
