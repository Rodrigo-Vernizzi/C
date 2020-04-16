#include <stdio.h>

int main() {
    int N,i,x,y,z;

    i = 1;
    x = 1;
    scanf("%i",&N);

    if (N>0){
        while(x<=N){
            y = i+1;
            z = i+2;
            printf("%i %i %i PUM\n",i,y,z);
            i+=4;
            x++;
         }
    }




    return 0;
}
