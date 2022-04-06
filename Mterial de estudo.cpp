#include <stdio.h>
#include <iostream>
using namespace std;

//fgets (NomeDoChar, TamanoDoChar, stdin); 
int main() 
{
	/*
	FILE * Oteste;
	int n, Idade;
	char Nome[6];
	
	Oteste = fopen ("Oteste.txt", "r");
	
	if (Oteste == NULL) perror ("Deu n");
	else {
		if(fgets(Nome, 6, Oteste) != NULL){
			puts (Nome);
			fclose(Oteste);
		}
	}
	return 0;*/
	/*
	printf("Insira o primeiro nome: ");
	scanf("%s", Nome);
	printf("Insira idade: ");
	scanf("%d", Idade);
	*/
		
/*	
	for (int i = 0; i < 10; i++)
	{
		
		cout << "I = " << i << "\n";
		n += i;	
	}	

	cout << "-------------------------\nSomatorio do I = " << n;
*/
	
		int i, CPF;
		char Nome[100];
		char matricula [100];
		char Curso[100];
		
		for(i = 0; i < 3; i++){
			printf("Insira o Nome: ");
			fgets(Nome, 99, stdin);
			fflush (stdin);
			
			printf("Insira CPF: ");
			scanf("%d", &CPF);
			fflush(stdin);
			
			printf("Insira a Matricula: ");
			fgets(matricula, 99, stdin);
			fflush(stdin);
			
			printf("Curso: ");
			fgets(Curso, 99, stdin);
			fflush(stdin);
			
			printf("------------------------------\nNome: %s\n", Nome);
			printf("Matricula: %s\n", matricula);
			printf("CPF: %d\n", CPF);
			printf("Curso: %s", Curso);
			
		}
		
		
		
}
