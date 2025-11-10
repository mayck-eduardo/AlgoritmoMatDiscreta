
int soma(int a[2][2], int b[2][2])
{
    printf("Soma de A + B\n");
    for(int i = 0; i<2; i++)
    {
        for(int j = 0; j<2; j++)
        {
            printf("[%d]", a[i][j] + b[i][j] );
        }
        printf("\n");
    }
    printf("\n");
}

