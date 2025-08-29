#include <stdio.h>

int main(){

//RAINHA_8_PRA_ESQUERDA
    for(int Rainha = 1; Rainha <= 8; Rainha++){
        printf("%d Esquerda\n", Rainha);
}printf(" \n");
    
//TORRE_5_PRA_DIREITA    
int torre = 1;
    while (torre <= 5){
        printf("%d Direita\n", torre);
        torre++;
    }printf(" \n");

//BISPO_5_HORIZONTAL    
int Bispo = 1;
    do{
        printf("%d Cima, Direita\n", Bispo);
        Bispo++;
    }while (Bispo <= 5);
    printf(" \n");

//CAVALO
int i , j ;
    for (i = 1; i <= 1; i++){
        j = 1;
        while (j <= 2){
            printf("Baixo\n");
            j++;
        }printf("Esquerda\n");
    }



return 0;
    
}