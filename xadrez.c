#include <stdio.h>

// Torre: recursiva, 'anda' 5 casas para a direita
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}


// Bispo: recursiva + loops aninhados, 'anda' 5 casas na diagonal (cima e direita)
void moverBispo(int casas) {
    if (casas == 0) return;

    for (int i = 0; i < 1; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima, Direita\n");
        }
    }

    moverBispo(casas - 1);
}


// Rainha: recursiva, 'anda' 8 casas para a esquerda
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}


// Cavalo: loops aninhados com múltiplas variáveis e controle de fluxo, 'anda' 3 casas em 'L'
void moverCavalo() {
    int movimentoVertical = 2;
    int movimentoHorizontal = 1;

    printf("Movimento do [Cavalo]:\n");

    for (int i = 1, j = movimentoVertical; i <= movimentoVertical; i++, j--) {
        printf("Cima\n");
        if (i < movimentoVertical) continue; // só vai continuar até a última casa.

        int k = 1;
        while (k <= movimentoHorizontal) {
            if (k == movimentoHorizontal) {
                printf("Direita\n");
                break;
            }
            k++;
        }
    }
}

int main() {
    printf("Movimento da [Torre]:\n");
    moverTorre(5);

    printf("\n");


    printf("Movimento do [Bispo]:\n");
    moverBispo(5);

    printf("\n");


    printf("Movimento da [Rainha]:\n");
    moverRainha(8);

    printf("\n");


    moverCavalo();

    printf("\n");
    
    return 0;
}
