#include <stdio.h>
#include <string.h>

int main(){

    int n, tam, limite[2];
    char n1[12222],n2[12222],aux[61111];
    int i, j, k;

    scanf("%d",&n);
    //printf("\n");

    for(i=0;i<n;i++){

        scanf("%s %s",n1,n2);
        limite[0]=atoi(n1);
        limite[1]=atoi(n2);


        for(j=limite[0];j<=limite[1];j++){

            printf("%d",j);
        }

        for(j=limite[1];j>=limite[0];j--){

            sprintf(aux, "%d", j);
            tam = strlen(aux);

            for(k=0;k<tam;k++){
                printf("%c",aux[tam-k-1]);
            }

        }
        printf("\n");
    }

    return 0;
}
