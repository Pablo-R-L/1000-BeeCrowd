#include <stdio.h>
int main (){
	
	int Id;
	printf("Insira idade: ");
	scanf("%d", &Id);
	
	switch (Id){
		case 0 ... 10: printf("crianca");
		break;
		case 11 ... 18: printf("adolescente");
		break;
		case 19 ... 60: printf("adulto");
		break;
		case 61 ... 100: printf("idoso");
		break;
		case 101 ... 150 : printf("zumbi");
		break;
		default: printf ("numero invalido");
		break;
		
	}
	
	
}
