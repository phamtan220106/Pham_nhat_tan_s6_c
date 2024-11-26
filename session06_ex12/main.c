#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("pham-nhat_tan_session06_ex12\n");
    long int n;
    printf("nhap n: ");
    scanf("%ld",&n);
    long int A[n];
    printf("%ld so fibonaci dau tien la: \n",n);
    for(int i=0 ;i<n; i++){
        if(i<=1){
            A[i]=1;
            printf("%ld\n",A[i]);
        }else{
            A[i]=A[i-1]+A[i-2];
            printf("%ld\n",A[i]);
        }
    }
    printf("\n");
    printf("Hello world!\n");
    return 0;
}
