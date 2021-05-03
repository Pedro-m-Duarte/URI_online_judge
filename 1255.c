#include <stdio.h>
#include <string.h>

int aux, maior=0, alf_freq[26];
char text[201],alf_s[26];


void alfabeto(){ // seta as todo as letras do alfabeto à string
    int i;
    for(i=0;i<26;i++){
        alf_s[i]=97+i;

    }
   // printf("alfabeto ok %s\n",alf_s);
}
void lowerCASE(){// seta todas as letras da string minusculas

    int i;
    for(i=0;text[i]!='\0';i++){
        if(text[i]>=65 && text[i]<=90){
            text[i] = text[i] + 32;
        }

    }
    //printf("lowercase: %s\n",text);
}
void freq_0(){// seta os valores para 0
    int i;
    for(i=0;i<26;i++){
        alf_freq[i]=0;
       // printf("valores ok [%d]  %d\n",i,alf_freq[i]);
    }

}
/*
    Funções de base acima
    Funções que realizam o calculo do problema abaixo

*/
void freqLET(){// conta o n de vezes de cada letra
    int i, j;
    for(i=0;i<strlen(text);i++){
        for(j=0;j<26 ;j++){
            if(text[i]==alf_s[j]){
                alf_freq[j]++;
            }
        }
    }
}
void maiorPOS(){
    int i;
    maior = alf_freq[i];
    aux=0;
    for(i=0;i<25;i++){
        if (maior < alf_freq[i+1]){

            maior =alf_freq[i+1];
            aux = i+1;
        }

    }

}
int main(){

    int n, i, j;

    alfabeto(alf_s[26]);// atribui as todo as letras do alfabeto à string

    //printf("numero tentativas\n");
    scanf("%d",&n);
    if(n>0){
        fgets(text,201,stdin);
    }
    for(i=0;i<n;i++){

        freq_0();// seta os valores para 0
        fgets(text,201,stdin); // escreve a string
        lowerCASE();// seta todas as letras da string minusculas
        freqLET();
        maiorPOS();
       // printf("maior alf_pos[%d] = %d\n",aux,maior);

        for(j=0;j<26;j++){
            if(alf_freq[j]==maior){
                printf("%c",alf_s[j]);
            }
               //  printf("%c : %d\n",alf_s[j],alf_freq[j]);
        }
        printf("\n");
    }


    return 0;
}
