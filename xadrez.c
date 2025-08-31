#include <stdio.h>
// Movimentos da Rainha, 8 casas para Esquerda.
void recursiva(int movRainha){
    if (movRainha > 0 ){
        recursiva(movRainha - 1);
        printf("%d Esquerda\n", movRainha);}}

// Movimentos da Torre, 5 para Direita.
void recursiva2(int movTorre){
    if (movTorre > 0){
        recursiva2(movTorre - 1);
        printf("%d Direita\n", movTorre);}}

// Movimnentos do Bispo, 5 vertical e 5 horizontal.
void recursiva3(int movBispo){
    if (movBispo  > 0){
        for (int i = 1; i <= movBispo; i++){
            if (i % 2 == 0){
                printf("%d Direita\n", i);
            }else
                printf("%d Cima\n", i);}}}


// Movimentos do Cavalo, 2 para cima e 1 direita.
void recursiva4(int movCavalo, int movCavalo2){
    if (movCavalo && movCavalo2 > 0){
        recursiva4(movCavalo, movCavalo2 - 1);
        for (movCavalo, movCavalo2  = 1; movCavalo && movCavalo2 <= 1; movCavalo, movCavalo2 ++){
            int i = 1;
            while (i <= 2){
                printf("%d Cima\n", i);
                i++;
            }printf("%d Direita\n", i);}}}

int main(){
// RAINHA
    int numMovimentos = 8;
    recursiva(numMovimentos);
    printf(" \n");

// TORRE
    int numMovimentos2 = 5;
    recursiva2(numMovimentos2);
    printf(" \n");

// BISPO
    int numMovimentos3 = 10;
    recursiva3(numMovimentos3);
    printf(" \n");

// CAVALO
    int numMovimentos4 , num4 = 1;
    recursiva4(numMovimentos4, num4);

return 0;

}
