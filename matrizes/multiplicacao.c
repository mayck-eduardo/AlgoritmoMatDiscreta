int multiplicacao(int c[2][2]) {

    printf("MULTIPLICACAO C*C\n");
    int temp[2][2] = {{0, 0}, {0, 0}};

    for (int i = 0; i < 2; i++) { // Percorre as linhas da matrizA
        for (int j = 0; j < 2; j++) { // Percorre as colunas da matrizB
            for (int k = 0; k < 2; k++) { // Percorre os elementos para somar os produtos
                temp[i][j] += c[i][k] * c[k][j];
            }
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d\t", temp[i][j]);
        }
    }

    }

