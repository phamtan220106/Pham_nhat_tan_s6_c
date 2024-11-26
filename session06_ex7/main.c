#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("pham-nhat_tan_session06_ex7\n");
    int n;
    printf("nhap n: ");
    scanf("%d",&n);
    printf("cac uoc cua %d la:\n",n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
            printf("%d\n",i);
        }
    }
    printf("Hello world!\n");
    return 0;
}
