// Bibliotecas utilizadas
#include<stdio.h>
#include<stdlib.h> // Para usar algumas funções do programa

// CORES usando códigos ANSI
#define BHRED   "\e[1;91m" // Vermelho negrito
#define BHGRN 	"\e[1;92m" // Verde negrito
#define BHBLUE  "\e[1;94m" // Azul negrito
#define BHMAG   "\e[1;95m" // Magenta negrito
#define RESET 	"\x1B[0m"  // Redefine todos os atributos

// Programa principal
int main()
{
	int i; // Variável para o laço de repetição

	system("clear"); 
	fflush(stdout); // Limpa a tela
	system("sleep 0.05"); // Para forçar um delay de 5 milissegundos
	printf(BHGRN"GERANDO ARQUIVO\n"RESET); // Imprime na tela usando cor verde negrito
	system("sleep 02"); // Para forçar um delay de 2 segundos
	for(i=0;i<15;i++) // Laço para repetir a animação durante o "tempo" definido
	{
		printf(BHGRN"\\"RESET);
		system("clear");
		fflush(stdout);
		system("sleep 0.1");
		printf(BHGRN"|"RESET);
		system("clear");
		fflush(stdout);
		system("sleep 0.1");
		printf(BHGRN"/"RESET);
		system("clear");
		fflush(stdout);
		system("sleep 0.1");
		printf(BHGRN"%c"RESET,126);
		system("clear");
		fflush(stdout);
		system("sleep 0.1");
	}
	system("clear");
	fflush(stdout);
	printf("\n");
	printf(BHGRN"ARQUIVO GERADO\n\n"RESET);
	system("sleep 0.09");
	printf(BHGRN"PRESSIONE ENTER PARA CONFIRMAR"RESET);
	getchar(); // Aguarda receber uma entrada do teclado para encerrar o programa
  
} // Fim do programa
