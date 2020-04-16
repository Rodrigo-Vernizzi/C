#include <stdio.h>

int main() {
    int X = 1, i;

    while (X) {
        scanf("%d", &X);
        if (X == 0) {
            break;
        }
        for (i = 1; i <= X; i++) {
            printf("%d", i);
            if(i!=X)
            printf(" ");
                if (i == X) {
                    printf("\n");
                }
        }
    }



    return 0;
}
