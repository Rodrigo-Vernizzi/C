#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cont, cont2;

struct agenda {

    int hora, minuto;
    char tarefa[100];


}typedef agenda;;

void agendar(agenda *agendas, int cont2){

int cont;

for (cont = 0; cont < cont2; cont++){

    printf("Agende a atividade: ");
	fflush(stdin);
	fgets(agendas[cont].tarefa, sizeof(agendas[cont].tarefa), stdin);

	printf("Agende o horario (horas):\n ");
	scanf("%d",&agendas[cont].hora);

	printf("Agende o horario (minutos):\n ");
	scanf("%f",&agendas[cont].minuto);
}

printf("\n------------------------------------\n");
printf("\nInformacoes cadastradas com sucesso...\n");
printf("\n------------------------------------\n");
system("\npause\n");

}

void arquivo(agenda *agendas, int cont2){

FILE *fp;

fp = fopen("Tarefas.txt", "w");

fprintf(fp, "Tarefa:  %s , as %d:%d", agendas[cont].tarefa, agendas[cont].hora, agendas[cont].minuto);

printf("Arquivo Tarefas.txt criado com sucesso\n");

fclose(fp);


}
int main(){

int menu;

printf("Digite a quantidade de tarefas que deseja agendar:\n ");
scanf("%d",&cont2);

agenda agendas[cont2];

while (menu != 2){

    printf("Menu:\n|1|- Para Agendar.\n|2|- Para Salvar.\n");
    scanf("%d",&menu);

switch (menu){
          case  1 : agendar(agendas,cont2);/*chamada da funcao cadastro...*/

       break;

          case  2 : arquivo(agendas,cont2);/*Chamada da funcao busca...*/
       break;

       default: printf("Opeгacao invalida...\n");
          break;

}
}


system ("pause");
}

