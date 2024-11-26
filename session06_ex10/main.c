#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("pham-nhat_tan_session06_ex10\n");
    int n,uoc=0;
    printf("nhap vao mot so: ");
    scanf("%d",&n);
    for(int i=2;i<=(int)sqrt(n);i++){
            if(n%i==0){
                uoc++;
            }
    }
    if(uoc==0){
        printf("%d la so nguyen to\n",n);
    }else{
        printf("%d khong phai so nguyen to\n");
    }
    printf("Hello world!\n");
    return 0;
}
