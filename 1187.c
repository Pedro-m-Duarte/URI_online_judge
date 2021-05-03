#include <stdio.h>
#include <math.h>

int main(){

    double mat[12][12],som=0;
    int i,j,a=0;
    char op;

    scanf("%c",&op);

    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf",&mat[i][j]);

        }
     }

    for(i=0;i<5;i++){
        for(j=1;j<11;j++){
            if(i+j<=10 ){
                if(j>=6){
                som =som + mat[i][j];
                 a++;
                }
                else if(j>i){
                    som =som + mat[i][j];
                    a++;
                }
            }
        }

    }
    //printf("%1.f\n",som);
    //printf("%1.f\n",som/2);
        if(op =='S'){
            printf("%.1lf\n",som);
        }
        else if(op == 'M'){
            printf("%.1lf\n",som/a);
        }



    return 0;
}


