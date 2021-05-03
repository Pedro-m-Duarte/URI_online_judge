#include <stdio.h>
#include <math.h>

int main(){

    int x, y, inf, sup, sum=0, contr;

    scanf("%d %d", &x, &y);

    if(x>y){
        inf =y;
        sup = x;
    }
    else {
        inf =x;
        sup = y;
    }

   contr = inf;

   // printf("inf = %d, sup =%d, contr = %d\n\n",inf,sup,contr);

    for(contr;contr<=sup; contr++){

        if(contr%13!=0){
            sum=sum+ contr;
        }
    }
   printf("%d\n",sum);
    return 0;
}
