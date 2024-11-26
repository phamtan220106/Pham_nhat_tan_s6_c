#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("pham_nhat_tan_session06_ex13\n");
    int day,month,good=100;
    printf("nhap ngay va thang sinh cua ban: ");
    scanf("%d %d",&day,&month);
        if (month==2){
            if(day<29){
                good=1;
            }else{
                good=0;
            }
        }else if(month==4 || month==6 || month==9 || month==11) {
            if(day<=30){
                good=1;
            }else{
                good=0;
            }
        }else if(1<=month && month<=12){
            if(day <=31){
                good=1;
            }else{
                good=0;
            }
    }
    if(good=1){
        if((month==3 && day>=21)||(month==4 && day<=20)){
            printf("ban thuoc cung bach duong:\n");
        }else if((month==4 && day>21)||(month==5 && day<=20)){
            printf("ban thuoc cung kim nguu:\n");
        }else if((month==5 && day>20)||(month==6 && day<=21)){
            printf("ban thuoc cung song tu:\n");
        }else if((month==6 && day>21)||(month==7 && day<=22)){
            printf("ban thuoc cung cu giai:\n");
        }else if((month==7 && day>22)||(month==8 && day<=22)){
            printf("ban thuoc cung su tu:\n");
        }else if((month==8 && day>22)||(month==9 && day<=22)){
            printf("ban thuoc cung xu nu:\n");
        }else if((month==9 && day>22)||(month==10 && day<=23)){
            printf("ban thuoc cung thien binh:\n");
        }else if((month==10 && day>23)||(month==11 && day<=22)){
            printf("ban thuoc cung bo cap:\n");
        }else if((month==11 && day>22)||(month==12 && day<=21)){
            printf("ban thuoc cung nhan ma:\n");
        }else if((month==12 && day>21)||(month==1 && day<19)){
            printf("ban thuoc cung ma ket:\n");
        }else if((month==1 && day>19)||(month==2 && day<=18)){
            printf("ban thuoc cung bao binh giong to ne:\n");
        }else if((month==2 && day>18)||(month==4 && day<=20)){
            printf("ban thuoc cung song ngu:\n");
        }
    }else{
    printf("khong hop le!\n");
    }
    printf("Hello world!\n");
    return 0;
}
