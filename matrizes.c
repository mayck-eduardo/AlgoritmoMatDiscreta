#include <stdio.h>

int matrizes() {
    int opcao;
    int a[2][2];
    int b[2][2];
    do {
        printf("\n---- CALCULADORA DE MATRIZES ----\n");
        printf("1. SOMA DE MATRIZES\n");

        printf("0. Sair\n");
        printf("---------------------------------------------\n");
        printf("Escolha uma opcao: ");

        scanf("%d", &opcao);




        switch (opcao) {
            case 1:
                printf("insira os valores da matriz a[2][2]\n");

                for (int i = 0; i < 2; i++) {
                    for (int j = 0; j < 2; j++) {
                        scanf("%d", &a[i][j]);
                    }
                }
                printf("insira os valores da matriz b[2][2]\n");
                for (int i = 0; i < 2; i++) {
                    for (int j = 0; j < 2; j++) {
                        scanf("%d", &b[i][j]);
                    }
                }
                soma(a, b);
            case 2:
                printf("insira os valores da matriz a[2][2]\n");

                for (int i = 0; i < 2; i++) {
                    for (int j = 0; j < 2; j++) {
                        scanf("%d", &a[i][j]);
                    }
                }
                printf("insira os valores da matriz b[2][2]\n");
                for (int i = 0; i < 2; i++) {
                    for (int j = 0; j < 2; j++) {
                        scanf("%d", &b[i][j]);
                    }
                }
                multiplicacao(a, b);
            case 0: // Sair

                printf("Ate logo!\n");
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
                break;
        }
    } while (opcao != 0);
};