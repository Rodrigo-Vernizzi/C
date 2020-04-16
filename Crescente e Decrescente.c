#include <stdio.h>

int main()
{
    int x, y;
   scanf("%d",&x);
   scanf("%d",&y);
   while (x!= y){
    if (x>y){
        printf("Decrescente\n");
        scanf("%d",&x);
        scanf("%d",&y);
    }
    else{
        printf("Crescente\n");
        scanf("%d",&x);
        scanf("%d",&y);
    }

   }

    if (x==y){
        return 0;
    }



    return 0;
}
