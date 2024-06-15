#include <stdio.h>
#include <stdlib.h>	
#include <string.h>

typedef struct {
	int quantAssentos;
	float valorEco;
	float valorExe;	
} Abertura;

typedef struct {
	char* nome;
	char* sobrenome;
	char cpf[15];
	int dia;
	int mes;
	int ano;
	char* id;
	char* assento;
	char* classe;
	float valor;
	char* origem;
	char* destino;
} Reserva;

void abrirVoo(Abertura* pnt) {
	scanf("%d %f %f", &pnt->quantAssentos, &pnt->valorEco, &pnt->valorExe);
}

char* alocarMemoria(int n) {
	char* string = (char*) malloc(n * sizeof(char));
	if(string == NULL) {
		printf("Erro ao alocar memoria");
		exit(1);
	}
	return string;
}

int main(void) {
	char* comando = alocarMemoria(2);
	Abertura* abertura;

	printf("Digite sua string:\n");
	scanf("%s", comando);

	if(strcmp(comando, "AV") == 0) {
		abrirVoo(abertura);
	} else {
		printf("Comando invalido");
		return 0;
	}

	printf("%d %f %f", abertura->quantAssentos, abertura->valorEco, abertura->valorExe);

	return 0;
}
