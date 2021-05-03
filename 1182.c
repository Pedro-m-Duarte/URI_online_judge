#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){

    char op;
    int col,i=0,j;
    float mat[12][12],som=0;

    scanf("%d %c",&col,&op);//coluna


    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%f",&mat[i][j]);
        }
    }

    for(j=0;j<12;j++){//soma os valores
        som = som + mat[j][col];
    }

   // printf("soma %.2f\n ",som);
   // printf("Media %.2f\n ",som/2);

    if(op == 'S'){
        printf("%.1f\n",som);
    }
    else if(op == 'M'){
        printf("%.1f\n",som/i);
    }


    return 0;
}
