#include <stdio.h>
#include <string.h>

typedef struct {
	int dia;
	int mes;
	int ano;
} DATA;

typedef struct {
	char nome[32];
	char telefone[11];
	DATA nasc;
} PESSOA;

int main()
{
	PESSOA melhorAmigo;

	printf("\nNome do seu melhor amigo:");
	fgets(melhorAmigo.nome, 32, stdin);

	printf("\nTelefone do seu melhor amigo:");
	fgets(melhorAmigo.telefone, 11, stdin);

	printf("\nData de nascimento do seu melhorAmigo: (dd/mm/aaaa)");
	scanf("%d %d %d", &melhorAmigo.nasc.dia, &melhorAmigo.nasc.mes, &melhorAmigo.nasc.ano);

	printf("\nImpressao dos dados:");
	printf("\nNome: %s", melhorAmigo.nome);
	printf("\nTelefone: %s", melhorAmigo.telefone);
	printf("\nData de nascimento do seu melhorAmigo: %d/%d/%d", melhorAmigo.nasc.dia, melhorAmigo.nasc.mes, melhorAmigo.nasc.ano);
	
	return 0;
}