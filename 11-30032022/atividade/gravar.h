/*Este arquivo é para gravar informações necessária
para o acesso do cliente à unidade senac sp*/

#include <stdio.h>
#include <stdlib.h>
#include "unidade.h"
#include "curso.h"

void gravar(){

    /* O tipo FILE é utlizado para criar arquivos.
Este arquivo deve ser alocado em memória, portanto, sua
criação deve ser feita como ponteiro*/

    FILE *arquivo;

    //A função fopen é reponsável por criar um arquivo
    //Este arquivo fica disponível em memória até o fechamento
    arquivo = fopen("dados.txt","w");


     //Verificar se o arquivo existe. Se ele não existe, então
    //exibir a mensagem de arquivo não encontrado e sair da 
    //execução do programa

    if(arquivo==NULL){
        printf("Arquivo não encontrado ou não existe");
        exit(1); //encerrar o programa


}

curso cur, *pcur;
unidade unid, *punid;

pcur = &cur;
punid = &unid;


 printf("Entre com o nome do curso:\n");
    fgets(pcur->curso,50,stdin);

    printf("Entre com a descricao do curso:\n");
   fgets(pcur->descricao,400,stdin);

    printf("Entre com a carga horaria do curso:\n");
    fgets(pcur->cargahoraria,10,stdin);

    printf("Entre com inicio do curso usando barras:\n");
    fgets(pcur->iniciocurso,30,stdin);

    printf("Entre com o termino do curso:\n");
    fgets(pcur->terminocurso,30,stdin);

    printf("Entre com o preco do curso:\n");
    fgets(pcur->preco,20,stdin);

    printf("Entre com o nome da unidade:\n");
    fgets(punid->nomeunidade,50,stdin);

    printf("Entre com a localizacao da unidade:\n");   
    fgets(punid->localizacao,100,stdin);

    printf("Entre com o horario de funcionamento da unidade :\n");
    fgets(punid->horariofunc,50,stdin);

    printf("Entre com o numero do telefone do aluno:\n");
    fgets(punid->telefone,20,stdin);

    printf("Entre com o nome do cantato:\n");
    fgets(punid->contato,50,stdin);

    //gravar o nome no arquivo
    fprintf(arquivo, pcur->curso);
    fprintf(arquivo, pcur->descricao);
    fprintf(arquivo, pcur->cargahoraria);
    fprintf(arquivo, pcur->iniciocurso);
    fprintf(arquivo, pcur->terminocurso);
    fprintf(arquivo, pcur->preco);
    fprintf(arquivo, punid->nomeunidade);
    fprintf(arquivo, punid->horariofunc);
    fprintf(arquivo, punid->telefone);
    fprintf(arquivo, punid->contato);
    fprintf(arquivo, punid->localizacao);
    
    //tirar o arquivo da memória. Fechar o arquivo
    fclose(arquivo);
}



