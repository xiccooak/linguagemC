#include <stdio.h>

int main(){

float preco, taxa, desconto, preco_final;
printf("digite o preço do produto");
scanf("%f" , &preco);

printf("digite a taxa de desconto");
scanf("%f" , &taxa);

/* o vendedor ira entrar com valor da taxa e em seguida nosso programa divide po 100 para obter
o valor em percentual. Sendo assim, quando o vendedor digitar
5, o programa vai calcular e teremos o resultado 0,05 que 
repesenta 5%*/
taxa = taxa / 100;

desconto = preco * taxa;
preco_final = preco - desconto;
printf("o valor do deconto é porcentagem %f e o valor final é porcentagem %f", desconto, preco_final);
}