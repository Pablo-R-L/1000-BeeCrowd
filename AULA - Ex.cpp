#include<stdio.h>
#include<chrono>
#include <thread>
int main(){//n muda
	using namespace std::this_thread; // sleep_for, sleep_until
    using namespace std::chrono;
/*
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
	printf("%.1lf / %.1lf = %.1lf \n", X, Y, Res);*/
	
	for (int i; i<3; i++){
		printf("pog\n" );
		sleep_for(nanoseconds(100000));
	}
	
}
