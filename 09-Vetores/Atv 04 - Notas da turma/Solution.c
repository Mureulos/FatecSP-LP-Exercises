#include <stdio.h>
#define ALUNOS 10
#define NOTAS 2

void obtemNotas(float notas[][NOTAS], int qtdAlunos) {
    for (int i = 0; i < qtdAlunos; i++) {
        printf("\nAluno %d:\n", i + 1);
        
        for (int j = 0; j < NOTAS; j++) {
            printf("  Nota %d: ", j + 1);
            scanf("%f", &notas[i][j]);
        }
    }
}

void calculaMediasAlunos(float notas[][NOTAS], float medias[], int qtdAlunos) {
    for (int i = 0; i < qtdAlunos; i++) {
        float soma = 0;
        
        for (int j = 0; j < NOTAS; j++) {
            soma += notas[i][j];
        }
        
        medias[i] = soma / NOTAS;
    }
}

float calculaMediaTurma(float medias[], int qtdAlunos) {
    float soma = 0;
    
    for (int i = 0; i < qtdAlunos; i++) {
        soma += medias[i];
    }
    
    return soma / qtdAlunos;
}

void imprimeResultados(float medias[], int qtdAlunos, float mediaTurma) {
    printf("\nMédia da turma: %.2f\n", mediaTurma);
    
    for (int i = 0; i < qtdAlunos; i++) {
        printf("Aluno %d - Média: %.2f - ", i + 1, medias[i]);
        
        if (medias[i] > mediaTurma) {
            printf("Acima da média\n");
        } 
        
        else if (medias[i] < mediaTurma) {
            printf("Abaixo da média\n");
        } 
        
        else {
            printf("Na média\n");
        }
    }
}

int main() {
    float notas[ALUNOS][NOTAS];
    float medias[ALUNOS];
    float mediaTurma;

    obtemNotas(notas, ALUNOS);
    calculaMediasAlunos(notas, medias, ALUNOS);
    mediaTurma = calculaMediaTurma(medias, ALUNOS);
    
    imprimeResultados(medias, ALUNOS, mediaTurma);

    return 0;
}
