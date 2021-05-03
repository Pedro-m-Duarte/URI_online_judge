#include <stdio.h>
#include <math.h>

int main(){

    int x, y, inf, sup, sum=0 ,i, contr;

    scanf("%d %d", &x, &y);
    for(;x> 0 && y>0;){


        if(x>y){
            inf =y;
            sup = x;
        }
        else {

            inf =x;
            sup = y;
        }
        contr = inf;

        for(sum=0;contr<=sup;contr++){
            sum = sum + contr;
            printf("%d ",contr);
        }
        printf("Sum=%d\n",sum);

        scanf("%d %d", &x, &y);
    }

     return 0;
}
