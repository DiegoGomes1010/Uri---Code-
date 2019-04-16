#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	int  X, Y;
	double KM;
	
	scanf("%d", &X);
	scanf("%d", &Y);
	
	KM = ((X * Y)*(1.0))/12;
	printf("%.3lf\n", KM);	
	return 0;
}
