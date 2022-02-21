#include<math.h>
#include<stdio.h>

int main(){
	
	int A, B, C, Delta, Resu1, Resu2;
	
	
	printf("insira a equacao aX + bx + c = 0 ");
	scanf("%d %d %d", &A, &B, &C);
	
	Delta = B*B - 4*A*C;
	
	if (A > 0 && Delta > 0){
		Resu1 = ((-1*B) - sqrt (Delta)) / (2 * A);
		Resu2 = ((-1*B) + sqrt (Delta)) / (2 * A);
		printf("Resultado 1: %d \nResultado 2: %d", Resu1, Resu2);
	}
	
}
