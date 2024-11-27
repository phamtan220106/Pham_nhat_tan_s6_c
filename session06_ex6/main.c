#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("pham nhat tan_session06_ex6\n");
    for(int i=1; i<=100; i++){
        if(i%3==0 && i%5==0){
            printf("bazzfizz\n");
        }else if(i%3==0){
            printf("fizz\n");
        }else if(i%5==0){
            printf("bazz\n");
        }else {
            printf("%d\n",i);
        }
    }
    printf("Hello world!\n");
    return 0;
}
