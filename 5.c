#include <stdio.h>
#include <stdlib.h>

struct Pessoa{

    char nome;
    char* cpf;
    int idade, cadeira;


};

int main(){

    int N, M, i, j;

    printf("Digite o numero de cadeiras e em seguinte a quantidade de informacoes:");

    scanf("%d %d", &N, &M);

    struct Pessoa criaRegistro[100];

    for (i=0;i<M;i++){


        printf("Digite o acento desejado:");
        scanf("%d", &criaRegistro[i].cadeira);

        printf("Digite o nome:");
        scanf("%s", &criaRegistro[i].nome);

        printf("Digite o cpf:");
        scanf("%s", &criaRegistro[i].cpf);

        printf("Digite a idade:");
        scanf("%d", &criaRegistro[i].idade);


        for (i=0;i<M;i++){
            printf("%d - %s %s %d", criaRegistro[i].cadeira, criaRegistro[i].nome, criaRegistro[i].cpf, criaRegistro[i].idade);
    }








    }






return 0;

}
