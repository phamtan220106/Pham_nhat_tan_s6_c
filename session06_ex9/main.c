#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    printf("pham-nhat_tan_session06_ex9\n");
    int j,tong;
    printf("cac so armstrong co 3 chu so la: \n");
    for(int i=100;i<=1000;i++){
        j=i;
        tong=0;
        while(j!=0){
            tong+=pow(j%10,3);
            j=j/10;
        }
        if(tong==i){
            printf("%d\n",i);
        }
    }
    printf("Hello world!\n");
    return 0;
}
