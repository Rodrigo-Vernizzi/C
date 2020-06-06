

#include <stdio.h>
#include <stdlib.h>

struct Alimento{

char nome[100];
int calorias, carboidrato;

};

int main(){

    int x, i, j, k, l, m, o;
    scanf("%d", &x);
    struct Alimento alimentos[100];
    int ordem[x], vetor[x], caloria[x], carbo[x];
    int menor = 0, pos = 0;

    for(i=0; i<x; i++){

        printf("Alimento: ");
        scanf("%s", alimentos[i].nome);
        vetor[i] = i;
        printf("Calorias: ");
        scanf("%d", &alimentos[i].calorias);
        caloria[i] = alimentos[i].calorias;

        printf("Gramas de carboidrato: ");
        scanf("%d", &alimentos[i].carboidrato);
        carbo[i] = alimentos[i].carboidrato;

        }

    for(j=1; j<x; j++){
        for(k=0; k<(x-1); k++){
            if(caloria[k] < caloria[k+1]){
                menor = caloria[k];
                pos = vetor[k];
                caloria[k] = caloria[k+1];
                vetor[k] = vetor[k+1];
                caloria[k+1] = menor;
                vetor[k+1] = pos;
            }
        }
    }

    for(l=1; l<x; l++){
        for(m=0; m<(x-1); m++){
            if(caloria[m] == caloria[m+1]){
                if(carbo[m] < carbo[m+1]){
                    menor = caloria[m];
                    pos = vetor[m];
                    caloria[m] = caloria[m+1];
                    vetor[m] = vetor[m+1];
                    caloria[m+1] = menor;
                    vetor[m+1] = pos;
                }
            }
        }
    }

    for(o=0; o<x; o++){
        printf("%d - %s \n", o, alimentos[vetor[((x-1)-o)]].nome);
    }
  return 0;
}
