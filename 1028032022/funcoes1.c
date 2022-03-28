/* Programa para trabalhar com funções. Vamos usar funções com
retorno, sem retorno, com argumentos(parâmetros), sem argumentos */

#include <stdio.h>
#include <stdlib.h>

void separadorHT(){
    for(int i = 0 ; i <= 50 ; i++){
        printf("#");

    }
}

void separadorLinha(){
    printf("\n");
    for(int i = 0 ; i <= 50 ; i++){
        printf("_");


    }
    printf("\n");
}

void pularLinha(int qtdVezes){
    for(int i = 1 ; i <= qtdVezes; i++){
        printf("\n");
    }

}

void comparar(int v1, int v2){
    if(v1 > v2){
        printf("O primeiro número é maior que o segundo");
    }
    else if(v1 == v2){
        printf("Se os números são iguais");
    }

                         
                                

    else{
        printf("O segundo número é maior do que o primeiro");
    }
};




void main(){
    int n1, n2;
    system("clear"); //Limpar a tela do terminal
    //chamado a função separadorHT
    separadorHT();    
    printf("\n\t\tprograma que exibe uma mensagem\n");    
    //chamado a função separadorlinha
    separadorLinha();
    pularLinha(2);
    printf("Digite um número:\n");
    scanf("%d", &n1);
    printf("Digite outro número:\n");
    scanf("%d", &n2);

    pularLinha(1);
    
    comparar(n1, n2);

    pularLinha(1);



    

}