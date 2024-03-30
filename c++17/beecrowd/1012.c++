#include <iostream>
#include <math.h>

using namespace std;
 
int main() {
 
    double a, b ,c, pi;
    double atri, acir, atra, aqua, aret;

    pi = 3.14159;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    atri = (a * c) / 2;
    acir = pi * pow(c, 2);
    atra = (a + b) * c / 2;
    aqua = b * b;
    aret = a * b;

    printf("TRIANGULO: %.3lf\n", atri);
    printf("CIRCULO: %.3lf\n", acir);
    printf("TRAPEZIO: %.3lf\n", atra);
    printf("QUADRADO: %.3lf\n", aqua);
    printf("RETANGULO: %.3lf\n", aret);
 
    return 0;
}