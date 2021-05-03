#include <stdio.h>
#include <math.h>
#define pos 100
int main(){

    double n[pos];
    int i;
    scanf("%lf", &n[0]);

    for(i=1;i<pos;i++){
        n[i]=n[i-1]/2;
    }

     for(i=0;i<pos;i++){
        printf("N[%d] = %.4lf\n",i,n[i]);
    }

    return 0;
}
