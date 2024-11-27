#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[5],le=0;
    for(int i=0;i<=4;i++){
        scanf("%d",&A[i]);
        if(A[i]%2!=0){
            le+=A[i];
        }
    }
    printf("tong cac so le la: %d\n",le);
    printf("Hello world!\n");
    return 0;
}
