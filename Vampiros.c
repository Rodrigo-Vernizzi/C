#include <stdio.h>
#include <math.h>

double foo(int A, int B, int at) {
    double o;

    if(at == 3) {
        return (double)A/(double)(A + B);
    }else{
        o = 1.0 - (6 - at)/6.0, o = (1 - o)/o;
        return (1.0 - pow(o, A))/(1.0 - pow(o, A + B));
    }
}

int main(int argc, char const *argv[]) {
    int ev1, ev2, at, o, tmp;
    double p;

    while(scanf("%d%d%d%d", &ev1, &ev2, &at, &o) && (ev1 || ev2 || at || o)){
        tmp = ev1, ev1 = 0;

        while(tmp > 0){ tmp -= o, ev1++; }
        tmp = ev2, ev2 = 0;
        while(tmp > 0){ tmp -= o, ev2++; }

        p = foo(ev1, ev2, at);
        printf("%.1f\n", p * 100);
    }

    return 0;
}
