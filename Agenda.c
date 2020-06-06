#include <stdio.h>
#include <stdlib.h>

struct agenda {

    int dia, mes, ano, hora, minuto, segundo;
    char tarefa[100];


};

int main(){

    int x,i;
    scanf("%d", &x);
    struct agenda age[1000];;
    for (i=0;i<x;i++){

        printf("Informe o dia:\n");
        scanf("%d", &age[i].dia );

        printf("Informe o mes:\n");
        scanf("%d", &age[i].mes );

        printf("Informe o ano:\n");
        scanf("%d", &age[i].ano );

        printf("Informe a hora:\n");
        scanf("%d", &age[i].hora );

        printf("Informe o minuto:\n");
        scanf("%d", &age[i].minuto );

        printf("Informe os segundos:\n");
        scanf("%d", &age[i].segundo );

        printf("Informe a atividade:\n");
        fflush(stdin);


        fgets(age[i].tarefa,100,stdin);
    }
    for(i=0; i<x; i++){

     printf("%02d/%02d/%02d - %02d:%02d:%02d\n %s\n", age[i].dia, age[i].mes, age[i].ano, age[i].hora, age[i].minuto, age[i].segundo, age[i].tarefa);
   }









return 0;
}

