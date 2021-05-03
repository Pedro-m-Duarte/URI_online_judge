#include <stdio.h>
#include <math.h>

int main(){

    float s, contr, i;

    s=1;
    i=2;

    for(i;i<101;i++){
        contr = 1/i;
        s= s+contr;
     //   printf("s: %.2f, i : %.2f, contr: %f\n",s,i,contr);
    }
    printf("%.2f\n",s);

    return 0;
}
