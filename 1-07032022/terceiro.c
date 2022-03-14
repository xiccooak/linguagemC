// Programa para calcular area, dado do raio
#include <stdio.h> // biblioteca stardart de Imput/Output
#define PI 3.14159 // constante pi
// a seguir a função main()
int main()
{ 
    float raio, area; // duas vars. declaradas
    // mostra na tela uma mensagem com printf
    printf("Digite o valor do raio do circulo, e ENTER\n");
    // le do teclado com scanf; note o &raio
    scanf("%f" , &raio); // exemplos: 1.23 12.3e-1
    // a seguir mostra na tela o valor do raio lido
    // usando 12 colunas, e 2 decimais arredondados
    // por ex. 1.576 é arredondado para 1.58. só na tela
    printf("Raio digitado é %12.2f\n" , raio);
    area = PI * raio * raio;
    printf("Area do circulo com raio %f é %f\n" , raio, area);
    return 0;
    // fim main
    

}