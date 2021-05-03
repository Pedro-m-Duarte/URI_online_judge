#include <stdio.h>
#include <string.h>

int matNula(char *num){
    int i;
    for(i=0;i<strlen(num);i++){
        if(num[i]!='0') return 0;
    }
    return 1;
}
void saidaERRO(char n_def, char *num){
    int i, zero=0;

    //printf("saidaERRO(), TAM:%d \n",strlen(num));

    for(i=0;i<strlen(num);i++){

        if(num[i]!='0' && num[i]!=n_def){
            zero=1;
        }
        if(num[i]!=n_def && zero == 1){
            printf("%c",num[i]);
        }

    }
    if(zero==0){
        printf("0");
    }
    printf("\n");

}


int main(){

    int nc, i;
    char num[10001] , n_def;
    scanf(" %c %s",&n_def,num);

    while(n_def != '0' && matNula(num)!='0'){

        //printf("n_def: %c, num: %s\n",n_def,num);
        saidaERRO(n_def,num);

        scanf(" %c %s",&n_def,num);

    }




    return 0;
}
