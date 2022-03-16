//"O programa é para o funcionário digitar o cargo que ele desempenha na empresa X


#include <stdio.h>

int main(){

char nc[20];

#define CARGOD  15000.00
#define CARGOG  12000.00
#define CARGOA   8000.00
#define CARGOAS  4000.00
#define CARGOAU  2000.00
#define CARGOOU  sem definicao

printf("Digite o cargo e tecle ENTER\n");
scanf("%s",nc);
if(strcmp(nc, "diretor")== 0){
    printf("O salário do diretor é %f",CARGOD);
}
else if(strcmp(nc, "gerente")==0) {
    printf("O salário do gerente é %f", CARGOG);
}

else if(strcmp (nc,"analista")== 0){
    printf("O salário do analista é %f",CARGOA);

    }
else if(strcmp (nc, "assistente")== 0){
    printf("O salário do assistente é %f",CARGOAS);}

    
else if(strcmp (nc, "auxiliar")== 0){
    printf("O salário do auxiliar é %f",CARGOAU);}

    else if (strcmp (nc, "sem definição")== 0){
    printf("Sem definicao");
}








    return 0;
}