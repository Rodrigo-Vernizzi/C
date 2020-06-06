#include <stdio.h>

struct Paciente{

    char nome[100];
    char genero[1];
    int paciente_id;
    float altura, peso;
};

int main(){

    int x, y, i;
    struct Paciente paciente[100];

    printf("Numero de pacientes:\n");

    scanf("%d", &x);


    for(i=0; i<x; i++){

        printf(" nome:\n");

        fflush(stdin);

        fgets(paciente[i].nome,50,stdin);

        printf("altura, em metros\n");

        scanf(" %f", &paciente[i].altura);

        printf("peso, em kg:\n");

        scanf(" %f", &paciente[i].peso);

        printf("genero M para masculino e F para feminino:\n");

        scanf(" %c", &paciente[i].genero);

        printf(" id:\n");

        scanf(" %d", &paciente[i].paciente_id);
    }
// Para selecionar dois ou mais pacientes, basta apenas dar um espaço entre cada id, o programa continuara perguntando o id do paciente,
//ate quem seja digitado -1
    for(;;){

        printf("ID do paciente:\n");

        scanf(" %d", &y);



        for(i=0;i<x;i++){

            if(y==paciente[i].paciente_id)
                printf("nome:%s altura:%.2f\n peso:%.2f\n sexo:%c\n ID:%d\n", paciente[i].nome, paciente[i].altura, paciente[i].peso, paciente[i].genero, paciente[i].paciente_id);
        }

        if(y==-1)
            return 0;
    }


}









