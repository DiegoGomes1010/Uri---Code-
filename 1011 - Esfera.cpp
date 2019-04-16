#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	
	double R;
	double VOLUME;
	double pi = 3.14159;
	scanf("%lf", &R);
	
	VOLUME = (4.0/3) * pi * R * R* R; 
	printf("VOLUME = %.3lf\n",VOLUME );
	
	
	return 0;
	
}
