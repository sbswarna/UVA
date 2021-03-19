#include<stdio.h>
int main()
{
    int i,j,f;
    char a[100000];
    f=0;
    while (scanf("%c",&a[0])!=EOF){
        for(i=1;;i++){
            scanf("%c",&a[i]);
            if(a[i]=='\n')
                break;
        }
        for(j=0;j<i;j++){
            if(a[j]=='"'){
                if(f%2==0){
                printf("``");
                f=f+1;
                    }
                   else{
                         printf("\'\'");
                         f=f+1;
                   }
            }
        else
            printf("%c",a[j]);
        }
        printf("\n");
    }
        return 0;
}
