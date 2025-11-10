#include <stdio.h>

int matrizes() {
    int opcao;
    int a[2][2];
    int b[2][2];
    int c[2][2];
    do {
        printf("\n---- CALCULADORA DE MATRIZES ----\n");
        printf("1. SOMA DE MATRIZES\n");
        printf("2. SUBTRACAO DE MATRIZES\n");
        printf("3. MULTIPLICACAO DE MATRIZ\n");
        printf("4. DETERMINANTE DA MATRIZ\n");

        printf("0. Sair\n");
        printf("---------------------------------------------\n");
        printf("Escolha uma opcao: ");

        scanf("%d", &opcao);




        switch (opcao) {
            case 1:
                printf("SOMA\n");
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
                break;

            case 2:
                printf("SUBTRACAO\n");
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
                subtracao(a, b);
                break;

            case 3:
                printf("MULTIPLICACAO\n");
                printf("insira os valores da matriz c[2][2]\n");

                for (int i = 0; i < 2; i++) {
                    for (int j = 0; j < 2; j++) {
                        scanf("%d", &c[i][j]);
                    }
                }

                multiplicacao(c);
                break;

            case 4:
                printf("DETERMINANTE\n");
                printf("insira os valores da matriz c[2][2]\n");

                for (int i = 0; i < 2; i++) {
                    for (int j = 0; j < 2; j++) {
                        scanf("%d", &c[i][j]);
                    }
                }

                determinante(c);
                break;

            case 0: // Sair
                printf("Ate logo!\n");
                break;

            default:
                printf("Opcao invalida! Tente novamente.\n");
                break;
        }
    } while (opcao != 0);
};