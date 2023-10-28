//
// Created by deric on 28/10/2023.
//
#include <stdio.h>
int main() {
    int matriz1[3][3],matriz2[3][3], verdadeiro;
    printf("Quais os valores da matriz?:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("informe o valor da primeira matriz[%d][%d]\n", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("informe o valor da segunda matriz[%d][%d]\n", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if(matriz1[i][j] != -matriz2[i][j]){
                verdadeiro = 1;
            } else{
                verdadeiro = 2;
            }
        }
    }
    if(verdadeiro == 1){
        printf("Matrizes nao opostas");
    }
    else{
        printf("Matrizes opostas");
    }
    return 0;
}