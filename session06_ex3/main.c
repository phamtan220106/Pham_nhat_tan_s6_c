#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[]={1,2,3,4},B[4],dem=0;
    for(int i=0;i<=3;i++){
        scanf("%d",&B[i]);
        if(A[i]==B[i]){
            dem++;
        }
    }
    if(dem==4){
        printf("unlock mat khau dung: ");
        for(int i=0;i<=3;i++){
            printf("%d ",A[i]);
        }
    }else{
        printf("ke an trom!!\n");
    }
    printf("\n");
    printf("Hello world!\n");
    return 0;
}
