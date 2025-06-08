#include <stdio.h>
#include <string.h>
#define numAluno 2

typedef struct {
	char nome[21];
	char matricula[9];
	float mediaFinal;
} ALUNO;

void LeAlunos(int n, ALUNO listaAluno[]) {
    printf("Recebimento dos dados:");
    
    for(int i = 0; i < numAluno; i++) {
        printf("\nAluno %d", i + 1);
        printf("\n------------------");
        
        printf("\nInforme o nome: ");
        fgets(listaAluno[i].nome, 21, stdin);
        listaAluno[i].nome[strcspn(listaAluno[i].nome, "\n")] = '\0';
        
        printf("Informe a matricula: ");
        fgets(listaAluno[i].matricula, 9, stdin);
        listaAluno[i].matricula[strcspn(listaAluno[i].matricula, "\n")] = '\0';
        
        printf("Informe a media final: ");
        scanf("%f", &listaAluno[i].mediaFinal);
        getchar();
    }
}

void Imprime(int n, ALUNO listaAluno[]) {
    printf("\n\nImpressao dos dados:");
    
    for(int i = 0; i < numAluno; i++) {
        printf("\nAluno %d", i + 1);
        printf("\n------------------");
        
        printf("\nNome: %s", listaAluno[i].nome);
        printf("\nMatricula: %s", listaAluno[i].matricula);
        printf("\nMedia final: %f", listaAluno[i].mediaFinal);
    }
}

int main() {
    ALUNO t[numAluno];
    LeAlunos(numAluno, t);
    Imprime(numAluno, t);
    
	return 0;
}