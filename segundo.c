#include <stdio.h> // Este programa captura uma letra que o usuário digita
int main()
{
    char car;                                   // declara var. car do tipo
    printf("digite um caractere e ENTER\n");    // mostra na tela
    scanf("%c", &car);                          // % para ler ou mostrar char 1 char
    printf("Caracter digitado é %c\n" , car);
    return 0;

    // mostrar na tela uma letra de car lido
    // fim main 
}