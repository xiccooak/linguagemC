#include <stdio.h> // biblioteca standart de Imput/Output
int main()
{
    int u, x, divisao;
    printf("digite qualquer valor e tecle ENTER\n");
    scanf("%d" , &u);
    printf("O resultado de %d\n" , u);
    scanf("%d" ,  &x);
    printf("Digite qualquer valor e tecle ENTER\n");


    divisao = (u % x);
    printf("O resultado da divisao é %d\n", divisao);

    return 0;

    // fim


}