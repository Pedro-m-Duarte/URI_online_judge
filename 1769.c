#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int i, j, a;
    int num[9],num1=0,num2=0; // 123.456.789-11
    char cpf[15],aux[12];

    while(scanf("%s",cpf)!=EOF){

    num1=0;
    num2=0;


        for(i=0;i<3;i++){
            aux[i]=cpf[i];
            aux[i+3]=cpf[4+i];
            aux[i+6]=cpf[8+i];
        }
        aux[9]=cpf[12];
        aux[10]=cpf[13];

        for(i=0;i<9;i++){

            num[i]=aux[i]-'0';
        }

        for(i=0;i<9;i++){
            num1+=(1+i)*num[i];
            num2+=(1+i)*num[8-i];


        }

        if((num1%11 == (aux[9]-'0') || (num1%11==10 && (aux[9]-'0')==0))&&( num2%11 == (aux[10]-'0') || (num2%11==10 && (aux[10]-'0')==0))){
            printf("CPF valido\n");
        }
        else printf("CPF invalido\n");
    }
    return 0;
}

