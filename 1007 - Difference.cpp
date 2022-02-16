#include<stdio.h>
int main(){
	
	int a, b, c, d, Sod;
	
	printf("Coloca ai 4 numeros -> " );
	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	Sod = a*b - c*d;
	
	printf("Diferenca de %d x %d - %d x %d = %d", a, b, c, d, Sod);
	
}
