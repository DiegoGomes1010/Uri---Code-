#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

int main(){
	
	double p1x1;
	double p1y1;
	double p2x2;
	double p2y2;
	double distanc;
	
	cin >> p1x1 >> p1y1 >> p2x2 >> p2y2;
	
	distanc = sqrt ((p2x2 - p1x1)*(p2x2 - p1x1) + (p2y2 - p1y1)*(p2y2 - p1y1) );
	
	printf("%.4lf\n", distanc);
	
	return 0;
}
