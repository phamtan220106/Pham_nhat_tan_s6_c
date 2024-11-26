#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("pham-nhat_tan_session06_ex11\n");
    int n,uoc,sosont=0,i=2;
    printf("nhap n: ");
    scanf("%d",&n);
    printf("%d so nguyen to dau tien la: \n",n);
    while(sosont!=n){
        uoc=0;
        for(int j=2;j<=(int)sqrt(i);j++){
            if(i%j==0){
                uoc++;
            }
        }
        if(uoc==0){
            printf("%d\n",i);
            sosont++;
        }
        i++;
    }
    printf("Hello world!\n");
    return 0;
}
