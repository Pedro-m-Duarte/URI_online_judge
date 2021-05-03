#include <stdio.h>
#include <string.h>



int saidaCRIPT(char *msg, int tam){
    int i;

    char aux[tam];

    for(i=0;i<tam;i++){// avança 3 pos na tabela ascii

        if(msg[i]>=97 && msg[i]<=122){
            msg[i]=msg[i]+3;
        }
        else if(msg[i]>=65 && msg[i]<=90){
            msg[i]=msg[i]+3;
        }
    }
    //printf("1-%s\n",msg);

    for(i=0;i<tam;i++){// inverte a string
        aux[i] = msg[tam-i-1];
    }
    aux[i]='\0';
    //printf("2-%s\n",aux);

    for(i=( tam/2);i<tam;i++){// da metade pra frente recua uma pos na tabela ascii
        aux[i]=aux[i]-1;
    }

    printf("%s\n",aux);
    //strcpy(msg,aux);
}


int main(){

    int n, i, tam;
    char msg[1001];

    scanf("%d",&n);
    getchar();

    for(i=0;i<n;i++){

        gets(msg);
        tam=strlen(msg);
        saidaCRIPT(msg,tam);
    }

    return 0;
}
