#include <stdio.h>
#include <stdlib.h>

int main()
{
    float horas, velocidade, gasto;
   scanf("%f", &horas);
   scanf("%f", &velocidade);
   gasto = (horas*velocidade)/12;
   printf("%0.3f\n", gasto);

    return 0;
}

