int main()
{
    int A, i,j;
    char B;
    float M[12][12], soma=0;
    scanf("%i",&A);
    if(A>=0&&A<=11){
        scanf(" %c",&B);
        for(i=0;i<12;i++){
            for(j=0;j<12;j++){
            scanf("%f",&M[i][j]);
            }
        }
                for(i=0; i<12; i++){
                soma= soma+M[A][i];
            }
            if(B =='S'){
                printf("%.1f\n", soma);
            }
             if(B == 'M'){
             printf("%.1f\n", soma/12);
            }
    }

    return 0;
}
