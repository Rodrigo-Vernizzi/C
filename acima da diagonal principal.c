#include <stdio.h>
int main()
{
    double B=0.0, M[12][12];
    char T[2];
    int C,a,b,c,p=1;
    scanf("%s", &T);
    for(a=0;a<=11;a++)
    {
        for(b=0; b<=11; b++)
            scanf("%lf", &M[a][b]);
    }
    for(c=0; c<=11;c++)
    {
        for(C=p; C<=11;C++)
            B+=M[c][C];
        p++;
    }
    if(T[0]=='S')
        printf("%.1lf\n",B);
    else if(T[0]=='M')
    {
        B=B/66.0;
        printf("%.1lf\n",B);
    }
    return 0;
}
