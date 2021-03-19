#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n,i,a,b,s;
	priority_queue<long long>pq;
	while((scanf("%lld",&n)&&n!=0)==1)
	{
		pq=priority_queue<long long>();
		for(i=0;i<n;i++)
		{
			scanf("%lld",&a);
			pq.push(a*-1);
		}
		s=pq.top()*(-1);
		pq.pop();
		s=s+pq.top()*(-1);
		pq.pop();
		pq.push(s*-1);
		b=s;
		for(i=0;i<n-2;i++)
		{
			s=pq.top()*(-1);
			pq.pop();
			s=s+(pq.top()*(-1));
			b+=s;
			pq.pop();
			pq.push(s*-1);
		}
		printf("%lld\n",b);
	}
	return 0;
}
