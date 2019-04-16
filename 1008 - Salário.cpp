#include <iostream>
#include <stdio.h>
#include <stdlib.h>


int main(){
	
	int NUMBER;
	int horas;
	double t;
	double SALARY;
	
	scanf("%d", &NUMBER);
	scanf("%d", &horas);
	scanf("%lf", &t );
	
	SALARY = t * horas;
	printf("NUMBER = %d\n", NUMBER);
	printf("SALARY = U$ %.2lf\n", SALARY );
	
	
	return 0;
}
