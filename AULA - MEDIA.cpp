#include<stdio.h>
#define MEDIA 9.5
#define Freq 70
int main(){
	
	double A, B, MM;
	//int TEST;
	printf("Insira as notas do aluno: ");
	scanf("%lf %lf", &A, &B);
	/*printf("insira um terceiro numero so pq ss ");
	scanf("%d", &TEST);*/
	
	MM = (A + B)/2;

	if (MM <= MEDIA /*or TEST <= Freq*/)
		printf("HHAHAHAHAHAH %.2lf... Reprovado", MM);
		else 
			printf("Boa, emoji, voce foi aprovado %.2lf", MM);

}
