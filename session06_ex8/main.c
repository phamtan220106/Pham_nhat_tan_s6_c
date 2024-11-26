#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("pham-nhat_tan_session06_ex8\n");
    float Initial_amount,Interest,Amount_Collected=0,month;
    printf("so tien ban dau gui ngan hang: \n");
    scanf("%f",&Initial_amount);
    printf("lai suat hang thang tinh theo don vi %: \n");
    scanf("%f",&Interest);
    printf("so thang gui: \n");
    scanf("%f",&month);
    for(int i=1;i<=(int)month;i++){
        Amount_Collected=Initial_amount+Initial_amount*Interest/100;
        Initial_amount=Amount_Collected;
    }
    printf("so tien ban thu duoc sau %.0f thang la %.4f vnd\n",month,Amount_Collected);
    printf("Hello world!\n");
    return 0;
}
