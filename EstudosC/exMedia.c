#include <stdio.h>

void notas(int *nota1, int *nota2, int *nota3, int i) {
    switch(i) {
        case 1:
            printf("Digite a nota 1: ");
            scanf("%d", nota1);
            notas(nota1, nota2, nota3, i + 1);
            break;
        case 2:
            printf("Digite a nota 2: ");
            scanf("%d", nota2);
            notas(nota1, nota2, nota3, i + 1);
            break;
        case 3:
            printf("Digite a nota 3: ");
            scanf("%d", nota3);
            // Aqui não chama mais recursivamente porque terminou
            break;
        default:
            return;
    }
}

int media(int *nota1, int *nota2, int *nota3) {
    return (*nota1 + *nota2 * 2 + *nota3 * 2) / 5;
}

int main() {
    int n1, n2, n3;

    notas(&n1, &n2, &n3, 1);
    int resultado = media(&n1, &n2, &n3);
    printf("O valor da media é: %d\n", resultado);

    return 0;
}
