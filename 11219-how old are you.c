#include<stdio.h>
int main()
{
    int dd,mm,yy,dd2,mm2,yy2,age,i,T;
    scanf("%d",&T);
    if(T<=200&&T>=1)
    {
        for(i=1; i<=T; i++)
        {
        	printf("\n");
            scanf("%d%d%d",&dd,&mm,&yy);
			scanf("%d%d%d",&dd2,&mm2,&yy2);
            age=yy-yy2;
            if(yy<yy2||yy==yy2&&mm2>mm||mm==mm2&&yy==yy2&&dd<dd2)
            {
                printf("Case #%d: Invalid birth date\n",i);
            }
            else if(age>130)
            {
                printf("Case #%d: Check birth date\n",i);
            }
            else if(yy2==yy&&mm>mm2)
            {
                printf("Case #%d: 0\n",i);
            }
            else
            {
                printf("Case #%d: %d\n",i,age);
            }
        }
    }
    return 0;
}
