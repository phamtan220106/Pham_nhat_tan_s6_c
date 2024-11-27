#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("pham_nhat_tan_session04_ex9\n");
    int month,namnhuan,year;
    scanf("%d %d",&month,&year);
    if(year%100!=0 && year%4==0 || year%400==0){
        namnhuan=0;
    }else {
        namnhuan=1;
    }//kiemtranamnhuan
    if( month <=12 &&  month>=1 ){
        if (month==2){
            if(namnhuan==0){
                printf("nam nhuan, thang nay co 29 ngay va 366 ngay trong nam\n");
            }else{
                printf("thang nay co 28 ngay va 365 ngay trong nam\n");
            }
        }else if(month==4 || month==6 || month==9 || month==11){
                printf("thang nay co 30 ngay va 365 ngay trong nam\n");
        }else if(1<=month && month<=12){
                printf("thang nay co 31 ngay va 365 ngay trong nam\n");
    }
    }else{
        printf("thang ko hop le\n");
    }
    printf("Hello world!\n");
    return 0;
}
