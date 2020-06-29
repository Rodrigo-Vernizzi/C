#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Declaracao da variaveis globais de controle...*/

int cont,cont2;
float mediaturma;
/*Declaraзгo da Struct alunos onde estao guardadas todas a veriaveis ultilizadas no Programa...*/
struct aluno{
        char nome[15], sobrenome[15];
        int numerousp, turma;
        float prova1, prova2, prova3, media;


}typedef aluno;;


/*Funcao para o cadastro*/
void cadastro(aluno *alunos,int cont2){

int cont;


for(cont=0;cont < cont2;cont++){

    printf("Cadastre o nome: ");
	fflush(stdin);
	fgets(alunos[cont].nome, sizeof(alunos[cont].nome), stdin);

	printf("Cadastre o sobrenome: ");
	fflush(stdin);
	fgets(alunos[cont].sobrenome, sizeof(alunos[cont].sobrenome), stdin);

	printf("Cadastre o numero usp do aluno: ");
	scanf("%d",&alunos[cont].numerousp);

	printf("Turma: ");
	scanf("%d", &alunos[cont].turma);

	printf("Cadastre a nota da primeira prova:\n ");
	scanf("%f",&alunos[cont].prova1);

	printf("Cadastre a nota da segunda prova:\n ");
	scanf("%f",&alunos[cont].prova2);

	printf("Cadastre a nota da terceira prova:\n ");
	scanf("%f",&alunos[cont].prova3);

}

printf("\n------------------------------------\n");
printf("\nInformacoes cadastradas com sucesso...\n");
printf("\n------------------------------------\n");
system("\npause\n");


}

/*Funcao para a formacao da nota...*/
void verifica(aluno *alunos,int cont2){
/*Calculo da media...*/
for(cont=0;cont<cont2;cont++){

alunos[cont].media = ((alunos[cont].prova1 + alunos[cont].prova2 + alunos[cont].prova3)/3);

}
}
/*Funcao responsavel pela busca de um aluno em especifico...*/
void busca(aluno *alunos,int cont2){
    int nnumerousp;
printf("\n------------------------------------\n");
printf("Sistema de Busca.\n");
printf("\n------------------------------------\n");
printf("Digite a matricula do aluno: \n");
scanf("%d",&nnumerousp);
/*For para impressao...*/
for(cont=0;cont<cont2;cont++){
if(nnumerousp==alunos[cont].numerousp){
    printf("\n------------------------------------\n");
    printf("\nNumero USP: %d\n", alunos[cont].numerousp);
    printf("Nome: %s", alunos[cont].nome);
    printf("Sobrenome: %s", alunos[cont].sobrenome);
    printf("Turma: %d\n", alunos[cont].turma);
    printf("Media: %.2f\n", alunos[cont].media);
    printf("\n------------------------------------\n");
  }
 }
}

/*funcao de buscar turma*/

void buscaturma(aluno *alunos,int cont2){
    int nturma;
printf("\n------------------------------------\n");
printf("Sistema de Busca.\n");
printf("\n------------------------------------\n");
printf("Digite a turma: \n");
scanf("%d",&nturma);
/*For para impressao...*/
for(cont=0;cont<cont2;cont++){
if(nturma==alunos[cont].turma){
    printf("\n------------------------------------\n");
    printf("\nNumero USP: %d\n", alunos[cont].numerousp);
    printf("Nome: %s", alunos[cont].nome);
    printf("Sobrenome: %s", alunos[cont].sobrenome);
    printf("Turma: %d\n", alunos[cont].turma);
    printf("Media: %.2f\n", alunos[cont].media);
    printf("\n------------------------------------\n");
  }
 }
}

/*funcao de calcular media da  turma*/

void turmamedia(aluno *alunos,int cont2){
    int nturma;
    int mediaturma, turmamedia;

printf("\n------------------------------------\n");
printf("Media turma.\n");
printf("\n------------------------------------\n");
printf("Digite a turma: \n");
scanf("%d",&nturma);
/*For para impressao...*/
for( cont = 0 ;cont<cont2;cont++){
if(nturma==alunos[cont].turma){

        mediaturma += alunos[cont].media;

        turmamedia = mediaturma;

    printf("\n------------------------------------\n");
    printf("Media da turma: %.2f\n", turmamedia);


    printf("\n------------------------------------\n");
   }
  }
 }
/*funcao para arquivar os dados*/
void file(aluno *alunos, int cont2){

FILE *fp;
int nturma;
printf("\n------------------------------------\n");
printf("Digite a turma: \n");
scanf("%d",&nturma);

fp=fopen("RelatorioTurma.txt","w");
for(cont=0;cont<cont2;cont++){
if(nturma==alunos[cont].turma){
    fprintf(fp,"\nNumero USP: %d\n", alunos[cont].numerousp);
fprintf(fp,"Nome: %s", alunos[cont].nome);
fprintf(fp,"Sobrenome: %s",alunos[cont].sobrenome);
fprintf(fp,"Turma: %d\n", alunos[cont].turma);
fprintf(fp,"Media: %.2f\n", alunos[cont].media);
  }
 }


printf("Arquivo RelatorioTurma.txt criado com sucesso\n");

fclose(fp);

}
/*Funcao para Imprimir o Relatorio Geral dos alunos...*/
void lista(aluno *alunos,int cont2){
int cont;
printf("\n------------------------------------\n");
printf("\nRelatorio Completo.\n");
for(cont=0;cont<cont2;cont++){

    printf("\nNumero USP: %d\n", alunos[cont].numerousp);
    printf("Nome: %s", alunos[cont].nome);
    printf("Sobrenome: %s",alunos[cont].sobrenome);
    printf("Turma: %d\n", alunos[cont].turma);
    printf("Media: %.2f\n", alunos[cont].media);

}
printf("\n------------------------------------\n");

}



/*Funcao Principal Responsavel pela chamadas das de mais funcoes...*/

int main(){
int menu;

/*Linha para imformar a quantidade de alunos que deseja cadastrar...*/
printf("Digite a quantidade de alunos que deseja cadastrar:\n ");
scanf("%d",&cont2);
/*instancia da struct no main...*/
aluno alunos[cont2];


/*impressao do Menu...*/
       printf("\n------------------------------------\n");
       printf("Sistema para Cadastro de alunos e Notas.\n");
       printf("\n------------------------------------\n");


while(menu!=7){

       printf("Menu:\n|1|- Para Cadastro.\n|2|- Para Buscas.\n|3|- Para buscar por turma.\n|4|- Media da turma\n|5|- Arquivo .txt\n|6|- Relatorio.\n|7|- Para Sair");
       printf("\n------------------------------------\n");
       scanf("%d",&menu);



switch (menu){



          case  1 : cadastro(alunos,cont2);/*chamada da funcao cadastro...*/
	verifica(alunos,cont2);

       break;

          case  2 : busca(alunos,cont2);/*Chamada da funcao busca...*/
       break;

          case  3 : buscaturma(alunos,cont2);/*Chamada da funcao busca pela turma...*/
       break;

          case  4  :turmamedia(alunos, cont2);
       break;

          case 5   :file(alunos, cont2);
       break;

          case  6 : lista(alunos,cont2);/*Chamada da funcao lista...*/
       break;


          case  7 :printf("\nDesenvolvido por Rodrigo Vernizzi e Gustavo Sandrin\n\n"); printf("Finalizando o Sistema...\n\n\n");/*Finaliza do Programa...*/
       break;

          default: printf("Opeгacao invalida...\n");
          break;
 }
}

system("pause");
}
