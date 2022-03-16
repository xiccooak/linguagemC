/*Programa para calcular a situação do aluno.
Neste programa teremos as seguintes saídas:
    Aprovado, quando nota maior ou igual a 7
    Reprovado, quando nota menor ou igual a 4
    Recuperação, quando nota for entre 4 e menor que 7
    */

    #include <stdio.h>

    #define MEDPROV 7.0
    #define MEDREPROV 4.0


    int main(){

        float na;
        printf("Digite a nota do aluno e tecle ENTER\n");
        scanf("%f" ,&na);

        if(na >= MEDPROV){
              printf("O aluno está aprovado");
        }

        else if(na <= MEDREPROV){
            printf("O aluno está reprovado");
        }
        
        else{
            printf("O aluno está em recuperação");

        }
        
        return 0;

    }


