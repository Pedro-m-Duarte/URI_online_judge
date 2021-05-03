#include <stdio.h>
#include <math.h>

int main(){ // the greatest

    int a, b, c, m;

    scanf("%d %d %d", &a, &b, &c);

    if(a>=b){
        m = a;

        if(a>=c){
            m=a;
        } else m = c;
    }
    else {
        if(b>=c){
            m = b;
        }else m = c;
    }


    printf("%d eh o maior\n",m);

    return 0;
}
