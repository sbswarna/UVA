#include<stdio.h>
#include<math.h>
int main()
{
	double pi,y,x,T,r,w,A,Ag,Ar,i;
	int L;
	y=-1;
	scanf("%lf",&T);
	if(T<=100)
	{
	pi=acos(y);	
	i=1;
	while(i<=T)
	{
	scanf("%d",&L);
	if(L<=1000)
	{
	x=L/10;
	w=6*x;
	r=2*x;
	A=L*w;
	Ar=pi*r*r;
	Ag=A-Ar;
	printf("%.2lf %.2lf\n",Ar,Ag);
}
i++;
}  
	}
	return 0;
}
