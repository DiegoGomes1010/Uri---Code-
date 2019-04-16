#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
	
	char nome[50];
	double X , Y;
	double TOTAL;
	
	scanf("%s", nome);
	scanf("%lf", &X);
	scanf("%lf", &Y);
	
	TOTAL = (X + (Y * 0.15));
	printf("TOTAL = R$ %.2lf\n",TOTAL);
	
	return 0;
}
