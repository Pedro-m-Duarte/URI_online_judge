#include <stdio.h>
#include <math.h>

int main (){

    int x, i=2;


    scanf("%d",&x);

    for(i=2;i<=x;i++){

        printf("%d^2 = %d\n",i, i*i);
        i++;
    }



    return 0;
}
