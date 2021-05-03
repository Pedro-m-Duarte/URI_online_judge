#include <stdio.h>
#include <math.h>

int main(){

    float s, den, num, contr, i=1;
    s= 1;
    den=2;
    num=3;

        for(num;num<=39;num=num+2 ){
            contr =num/den;
            s= s+contr;
           // printf("s: %.2f, contr: %.2f/%.2f , i: %f\n",s,num,den,i++);
            den= den*2;
        }
        printf("%.2f\n",s);
    return 0;
}
