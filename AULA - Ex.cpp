#include<stdio.h>
int main(){//n muda

	double X, Y, Res;
	
	printf("Insira valor de A e B: ");
	scanf("%lf %lf", &X, &Y);


	Res = X + Y;
	printf("%.1lf + %.1lf = %.1lf \n", X, Y, Res);


	Res = X - Y;
	printf("%.1lf - %.1lf = %.1lf \n", X, Y, Res);
	
	
	Res = X * Y;
	printf("%.1lf * %.1lf = %.1lf \n", X, Y, Res);
	
	
	Res = X/Y;
	printf("%.1lf / %.1lf = %.1lf \n", X, Y, Res);
	

	
}
