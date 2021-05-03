#include <stdio.h>
#include <math.h>

int main(){

    int x, y, inf, sup, num ,i=1;

    scanf("%d %d", &x, &y);

    if(x>y){
        inf =y;
        sup = x;
    }
    else {
        inf =x;
        sup = y;
    }

   for(i=1 ; num <sup-1 ; i++ ){

        num = inf+i;
        if(num%5 == 2 || num%5 == 3){
            printf("%d\n",num);
        }
   }

    return 0;
}
