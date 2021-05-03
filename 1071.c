#include <stdio.h>
#include <math.h>

int main(){

    int x, y, inf, sup, sum=0 ,i, contr;

    scanf("%d %d", &x, &y);

    if(x>y){
        inf =y;
        sup = x;
    }
    else {

        inf =x;
        sup = y;
    }
    if(inf%2!=0 && inf+2 < sup){
        contr=inf+2;
    }
    else if(inf+1<sup){
        contr=inf+1;
    }

  // printf("Inf = %d, sup =%d, contr = %d\n\n",inf,sup, contr);

    for(contr;contr<sup;contr=contr +2){

        sum +=  contr;
      // printf("inf + i = %d, i = %d , sum = %d, contr = %d \n",inf+i,i,sum,contr );
   }

    printf("%d\n",sum);


    return 0;
}
