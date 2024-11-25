#include <stdio.h>

int main() {
    char nome[50];
    float nota;
    int frequencia;

    printf("Digite o nome do estudante: ");
    scanf(" %[^\n]", nome); 
    printf("Digite a nota do estudante (0 a 10): ");
    scanf("%f", &nota);
    printf("Digite a frequencia do estudante (0 a 100): ");
    scanf("%d", &frequencia);

    if (nota >= 7 && frequencia >= 75) {
        printf("\nO estudante %s foi APROVADO!\n", nome);
    } else {
        printf("\nO estudante %s foi REPROVADO.\n", nome);
    }

    return 0;
}
