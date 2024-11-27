#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[5],le,chan=0;
    for(int i=0;i<=4;i++){
        scanf("%d",&A[i]);
        if(A[i]%2==0){
            chan++;
            le=5-chan;
        }
    }
    printf("co %d so chan \n",chan);
    printf("co %d so le \n",le);
    printf("Hello world!\n");
    return 0;
}
