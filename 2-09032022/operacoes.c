#include <stdio.h> // biblioteca standart de Imput/Output
int main()
{
    float p, s, soma, subtracao, multiplicacao, divisao; 
 

    //A finalidade desse programa é permitir que o usuario insira um numero que ele possa realizar as 4 operaçoes matematica e ENTER\n");
    printf("digitar um numero e ENTER");
    scanf("%f" , &p);
    
    printf("digitar um numero e ENTER");
    scanf("%f" , &s);
    
    soma =        (p + s);
    subtracao =   (p - s);
    multiplicacao = (p * s);
    divisao    =  (p / s);

    printf("o resultado da soma é %f\n", soma);
    printf("o resultado da subtracao é %f\n", subtracao);
    printf("o resultado da multiplicacao é %f\n", multiplicacao);
    printf("o resultado da divisao é %f\n", divisao);


    return 0;
    //fim
}