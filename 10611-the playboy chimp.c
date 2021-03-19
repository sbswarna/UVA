#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,q,a1[60000],a2[50000],a3[60000],a4[60000],mid,low,high,i,j,d,e;
    while(scanf("%lld",&n)==1)
    {
        d=0;
        e=0;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&a1[i]);
        }
        scanf("%lld",&q);
        a1[n]=pow(2,32);

        for(i=0;i<q;i++)
        {
            scanf("%lld",&a2[i]);
        }
        a2[q]=pow(2,32);
        for(i=0;i<q;i++)
        {
            if(a2[i]<=a1[0])
            {
                a3[d]=0;
                d++;
            }
            else
            {
                low=0;
                high=n-1;
                while(low<=high)
                {
                    mid=(low+high)/2;
                    if(a1[mid]<a2[i]&&a1[mid+1]>=a2[i])
                    {
                        a3[d]=a1[mid];
                        d++;
                        break;
                    }
                    else
                    {
                        if(a1[mid]>=a2[i])
                        {
                            high=mid-1;
                        }
                        else
                        {
                            low=mid+1;
                        }
                    }
                }
            }
        }
        for(i=0;i<q;i++)
        {
            if(a1[n-1]<=a2[i])
            {
                a4[e]=0;
                e++;
            }
            else
            {
                low=0;
                high=n-1;
                while(low<=high)
                {
                    mid=(low+high)/2;
                    if(a1[mid]>a2[i]&&a1[mid-1]<=a2[i])
                    {

                        a4[e]=a1[mid];
                        e++;
                        break;
                    }
                    else
                    {
                        if(a1[mid]<=a2[i])
                        {
                            low=mid+1;
                        }
                        else
                        {
                            high=mid-1;
                        }
                    }
                }
            }
        }
        for(i=0,j=0;i<d,j<e;i++,j++)
        {
            if(a3[i]==0&&a4[j]!=0)
            {
                printf("X %lld\n",a4[j]);
            }
            else if(a3[i]!=0&&a4[j]==0)
            {
                printf("%lld X\n",a3[i]);
            }
            else if(a3[i]==0&&a4[i]==0)
            {
                printf("X X\n");
            }
            else
            {
                printf("%lld %lld\n",a3[i],a4[j]);
            }
        }
    }
    return 0;
}
