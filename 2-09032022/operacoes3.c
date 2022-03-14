#include <stdio.h> // biblioteca standart de Imput/Output
int main(){

       int d, t, r;
    printf(" entrar com a distancia percorrida:");
    scanf("%d" , &d);
    printf("entre com o tempo percorrido:");
    scanf("%d" , &t);
  

    r = d / t;
    printf("\n a velocidade media é %d\n", r);

    return 0;

    
}