#include<stdio.h>
int main(){
	int A, B;
	double MM;
	
	printf("Insira nota do Aluno A: ");
	scanf("%d", &A);
	printf("Insira nota do Aluno B: ");
	scanf("%d", &B);
	
	MM = ((A*3.5) + (B*7.5))/11;
	
	printf("Media: %lf", MM);
//return 0;
}
	
	

