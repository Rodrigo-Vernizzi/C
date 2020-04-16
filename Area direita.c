#include<stdio.h>
int main()
{
    double M[12][12],sum=0.0;
    char A[2];
    scanf("%s",&A);
    int x=11,y=6,i,j;
    for(i = 0;i < 6;i++){
        for(j = 0;j < 12;j++){
            scanf("%lf",&M[i][j]);
            if(j > x)sum += M[i][j];
        }
        x--;
    }
    for(i = 6;i < 12;i++){
        for(j = 0;j < 12;j++){
            scanf("%lf",&M[i][j]);
            if(j > y)sum += M[i][j];
        }
        y++;
    }
    if (A[0]=='S')printf("%.1lf\n",sum);
    else printf("%.1lf\n",sum/30.0);
    return 0;
}
