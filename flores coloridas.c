#include <stdio.h>
#include <math.h>

#define Pi 3.1415926535897

int main()
{
    double a, b, c, semiper, A, circpeq, circgran, final1, final2, final3;

    while(scanf("%lf %lf %lf", &a, &b, &c) != EOF){
        semiper = (a + b + c) / 2.0;
        A = sqrt(semiper * (semiper - a) * (semiper - b) * (semiper - c));

        circpeq = pow(A/semiper, 2) * Pi;
        circgran = pow((a * b * c) / (4 * A), 2) * Pi;

        final2 = A - circpeq;
        final1 = circgran - A;
        final3 = circpeq;

        printf("%0.4lf %0.4lf %0.4lf\n", final1, final2, final3);
    }

    return 0;
}
