/*Programa para calcular o cpf do usuário.
Quando o cpf inserido, pegamos os 9 primeiros digitos e
passsamos para o cálculo. É utilizado um número por vez do cpf
multiplicando pelo peso, partindo de 10 e indo até 2.
Na segunda parte do calculo pegamos os 9 dígitos mais o dídgito
encontrado e multiplicamos pelo pelo peso a partir de 11. Soma se os valores encontrados
e dividimos por 11. Se o resto da divisão for menos que 2, entaão 
o dígito será 0, caso contrario, o resto será 0; caso contrario o resto serábtraído por 11. */ 

#include <stdio.h>
int main(){

    int peso10 = 10;
    int peso11 = 11;
    int total  = 0;
    int resto  =0;
    char cpf[11];
    system("clear");
    printf("Digite o seu cpf sem o digito: \n");
    scanf("%s", cpf);
    /*converter todos os caracteres do cpf para número. Para isso
    devemos criar um conjunto de números em tipo int e realizar
    a conversão usando for*/
    int icpf[11];
    for(int x = 0 ; x <= 10 ; x++){
        icpf[x] = cpf[x] - 48;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
    }


    for (int i = 0 ; i <= 8 ; i++){
         total +=  icpf[i]*peso10;
         peso10--;
         }


         resto = total % 11;
         
         /* Se o rsto da divisão for menor que 2, então
         o primeiro digito de verificação será 0(zero) */

         if(resto < 2){
             icpf[9]=0;

         }

        else {
            icpf[9] - 11 - resto;
        }                  
    

        total = 0;
        resto = 0;

        for(int i = 0 ;i <= 9 ; i++){
            total += icpf[i]*peso11;
            peso11--;

        }
        resto = total % 11;
        if(resto < 2){
            icpf[10] = 0;

        }
        else{
            icpf[10] = 11-resto;
        }

        for(int i = 0 ;i <= 10 ; i++){
            printf("%d" , icpf[i]);
        }
        
    return 0;


}


