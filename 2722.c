#include <stdio.h>
#include <string.h>
#define TRUE 1
#define FALSE 0

int nomeComp(char nome[],char sobren[], char N_comp[]){
    int  tam , j=1, a=0, b=0, c=0, m=0;

    tam = strlen(sobren)+ strlen(nome)+1;
    N_comp[tam]='\0';

   // printf("a:%d, %d:b %d:c %d:j tam:%d\n",a,b,c,j,tam);

    while(c!=tam){

        if(j==1 || j==2 && nome[a]!='\0'){
            N_comp[c++]=nome[a++];
            //printf("a:%d,  %s\n",a,N_comp);
            j++;
        }
        else if(j==3 || j==4 && sobren[b]!='\0'){
            N_comp[c++]=sobren[b++];
            //printf("b:%d,  %s\n",b,N_comp);

            if(j==4) j=0;

            j++;
        }
        else if( nome[a]=='\0' ||  sobren[b]=='\0'){
            if(j<4)j++;
            else if (j==4) j=0;

        }

    //printf("j:%d m:%d\n",j,m++);
    }
    return 0;
}


int main(){

    int  i, tam, np;
    char nome[101],sobren[101],N_comp[202];
    //char *nOME=(char*)malloc(101*sizeof(char));

    scanf(" %d",&np);

    for(i=0;i<np;i++){



    scanf(" %[^\n] %[^\n]", nome, sobren);// Peo lart   drMazaes
    //printf("%s %s\n",nome,sobren);
    nomeComp(nome,sobren,N_comp);
    printf("%s\n",N_comp);


    }

    return 0;
}
