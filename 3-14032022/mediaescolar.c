/*Programa para calcular o resultado da situação do aluno, se está aprovado
ou reprovado. Vamos levar em consideração a nota do aluno e comparar a média 
de aprovação da escola. Caso a nota do aluno seja maior ou igual a 7, então o aluno
estará aprovado, caso contrário, estará reprovado*/

/*Incluir o cabeçalho de entrada e saída de dados padrão:
std(standart -> Padrão) io (i -> imput - output)*/

#include <stdio.h> // biblioteca standart de Imput/Output

// Definir uma constante sempre em letras maiuscúlas

# define MEDIAESCOLA 7.0

int main(){

    //declaração da variável notaAluno com o tipo float

    float notaAluno;
    printf("Digite a nota do aluno e tecle ENTER\n");
    scanf("%f", &notaAluno);
    
    //Desvio de fluxo com if .. else
    
    if(notaAluno >= MEDIAESCOLA){
        printf("Aluno aprovado");
    }

    else{
        printf("Aluno reprovado");

    }
    return 0;


} 