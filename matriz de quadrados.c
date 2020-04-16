include <stdio.h>

int main() {
    int n_mat, n_liCol, i, j, k;
    scanf("%d", &n_mat);
    unsigned long long int array[100][100], maior[100], n_alg[100];

    for(k = 0; k < n_mat; k++){
        scanf("%d", &n_liCol);

        for(j = 0; j < 100; j++){
            maior[j] = 0;
            n_alg[j] = 0;
        }

        for(i = 0; i < n_liCol; i++){
            for(j = 0; j < n_liCol; j++){
                scanf("%llu", &array[i][j]);
                if(array[i][j]*array[i][j] > maior[j]){
                    maior[j] = array[i][j]*array[i][j];
                }
            }
        }

        for(j = 0; j < n_liCol; j++){
            while(maior[j] != 0){
                n_alg[j] = n_alg[j] + 1;
                maior[j] = maior[j] / 10;
            }
        }
        char buf[20];

        if(k > 0) printf("\n");
        printf("Quadrado da matriz #%d:\n", k+4);
        for(i = 0; i < n_liCol; i++){
            for(j = 0; j < n_liCol; j++){
                if(j > 0) printf(" ");
                sprintf(buf, "%%%llullu", n_alg[j]);
                printf(buf, array[i][j]*array[i][j]);
            }
            printf("\n");
        }

    }

    return 0;
}
