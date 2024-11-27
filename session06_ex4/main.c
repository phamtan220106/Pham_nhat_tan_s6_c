#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    printf("pham nhat tan_session06_ex6\n");
    float a,b,c;
    float delta,x,x1,x2;
    scanf("%f %f %f",&a,&b,&c);
    if(a==0){
        if(b==0 && c==0){
            printf("phuong trinh vo so nghiem\n");
        }else if(b!=0){
            x=-b/c;
            printf("phuong trinh co mot nghiem: %.2f\n",x);
        }else{
        printf("phuong trinh vo nghiem\n");
        }
    }else{
        delta=b*b-4*a*c;
        if(delta>0){
            x1=(-b-sqrt(delta))/2*a;
            x2=(-b+sqrt(delta))/2*a;
            printf("phuong trinh co hai nghiem %.2f va %.2f\n",x1,x2);
        }else if(delta==0){
            x=-b/2*a;
            printf("phuong trinh co nghiem kep x1=x2=%.2f\n",x);
        }else{
            printf("phuong trinh vo nghiem\n");
        }
    }
    printf("Hello world!\n");
    return 0;
}
