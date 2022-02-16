#include<stdio.h>
int main(){
	
	double A, B, C, MM;
	printf("Insira a nota dos 3 alunos:");
	scanf("%lf %lf %lf", &A, &B, &C);
	
	MM = ((A*2) + (B*3) + (C*5))/10;
	
	printf("MEDIA = %lf", MM);
	
}
