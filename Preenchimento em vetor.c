#include <stdio.h>
int main()
{
    int a,b,d,e,f,g,h,i,j,n,p;
    int R=0, S=0, T=0, U=0;
 int par[5],impar[5],para[15];


    for(b=0; b<15; b++)
        scanf("%d", &para[b]);
    for(a=0; a<15; a++)
    {
        if(S==5)
        {
            for(n=0; n<5; n++)
                printf("impar[%d] = %d\n", n, impar[n]);
            S=0;
        }
        if(T==5)
        {
            for(p=0; p<5; p++)
                printf("par[%d] = %d\n", p, par[p]);
            T=0;
        }

        if(para[a]%2!=0)
        {
            impar[R]=para[a];
            ++R;
            S++;
            if(R==5) R=0;
        }
        if(para[a]%2==0)
        {
            par[U]=para[a];
            ++U;
            T++;
            if(U==5) U=0;
        }
    }
    for(i=0; i<S; i++)
            printf("impar[%d] = %d\n", i, impar[i]);
    for(j=0; j<T; j++)
            printf("par[%d] = %d\n", j, par[j]);
    return 0;
}
