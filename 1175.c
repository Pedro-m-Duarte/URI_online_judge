#include <stdio.h>
#include <math.h>

int main(){

    int n[20],i,a[20];

    for(i=0;i<20;i++){
        scanf("%d", &n[i]);
        
    }

     for(i=0;i<20;i++){
        printf("N[%d] = %d\n",i,n[19-i]);
    }

    return 0;
}
