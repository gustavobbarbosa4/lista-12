#include <stdio.h>
#include <stdlib.h>

typedef struct Aluno {
    char nome[100];
    int faltas;
    float nota;
} aluno_t;

int main() {
    aluno_t *novo_aluno = (aluno_t *)malloc(sizeof(aluno_t));

    if (novo_aluno == NULL) {
        printf("Erro ao alocar memoria\n");
        return 1;
    }

    printf("Digite o nome do aluno: ");
    scanf("%99s", novo_aluno->nome);

    printf("Digite o numero de faltas: ");
    scanf("%d", &novo_aluno->faltas);

    printf("Digite a nota: ");
    scanf("%f", &novo_aluno->nota);

    printf("\nNome: %s\n", novo_aluno->nome);
    printf("Faltas: %d\n", novo_aluno->faltas);
    printf("Nota: %.2f\n", novo_aluno->nota);
    
    if (novo_aluno->nota >= 7.0 && novo_aluno->faltas <= 10) {
        printf("Situacao: Aprovado\n");
    } else {
        printf("Situacao: Reprovado\n");
    }

    free(novo_aluno);
    return 0;
}
