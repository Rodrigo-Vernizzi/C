#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct Ponto
{
        int x,y;
};
  double acheDistancia(struct Ponto a, struct Ponto b)
 {
     float distancia_ponto_a_ponto_b;
     distancia_ponto_a_ponto_b = sqrt((a.x - b.x)*(a.x-b.x) + (a.y -b.y)*(a.y -b.y));
     return distancia_ponto_a_ponto_b;


 }
int main()
{
    struct Ponto a,b;

    scanf("%d %d", &a.x, &a.y);


    scanf("%d %d", &b.x, &b.y);

    printf("%.2f", acheDistancia(a,b));



    return 0;
}
