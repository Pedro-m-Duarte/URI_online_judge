#include <stdio.h>
#include <string.h>

int main(){

    int nc, i, j, np, diff;
    char per_1[22], per_2[22];

    scanf(" %d",&nc);

    for(i=0;i<nc;i++){
    scanf(" %d", &np);

        for(j=0;j<np;j++){
            if(j%2 ==0 ){
                scanf(" %s",per_1);
            }
            else{
                scanf(" %s",per_2);
            }

            if(strcmp(per_1,per_2)!=0 && j>0){
                diff++;
            }
        }
        if(diff==0){
            printf("%s\n",per_1);
        }
        else printf("ingles\n");

        diff=0;

    }


    return 0;
}
