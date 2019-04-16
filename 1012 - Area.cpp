#include <iostream>

using namespace std;

int main(){

    double A,B,C;
    double Tri;
    double Ret;
    double cir;
    double trap;
    double quad;
    cin >> A >> B >> C ;

    Tri = (A*C)/2.0;
    cir = C*C*3.14159;
    trap = ((A+B)*C)/2.0;
    quad = B*B;
    Ret = A*B;

    printf("TRIANGULO: %.3lf\n",Tri );
    printf("CIRCULO: %.3lf\n", cir);
    printf("TRAPEZIO: %.3lf\n", trap );
    printf("QUADRADO: %.3lf\n",quad );
    printf("RETANGULO: %.3lf\n", Ret);

}
