#include <stdio.h>
#include <string.h>

int main(){

    int i,j,k,nt,tam;
    char mo[52],mno[52];//= "farinha italiana hipopotamo outro da atmosfera pilantra ultrage trabalho amar";

    scanf("%d ",&nt);

    for(i=0;i<nt;i++){

        fgets(mo,52,stdin);

        tam = strlen(mo)-1;


        for(j=0, k=0;j<tam;j++){//julga os caracteres da mensagem oculta

            if (mo[0]!=' ' && k==0){
                mno[k]=mo[0];
                k++;
            }
            else if(mo[j]!=' ' && mo[j-1]==' '){
                mno[k]= mo[j];
                k++;
            }

        }
        mno[k]='\0';

        printf("%s\n",mno);

    }


    return 0;
}
