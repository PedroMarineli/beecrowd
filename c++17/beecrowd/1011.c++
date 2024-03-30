#include <iostream>
#include <math.h>
 
using namespace std;
 
int main() {
 
    double raio, volume, pi;

    pi = 3.14159;

    scanf("%lf", &raio);

    volume = (4.0/3) * pi * pow(raio, 3);

    printf("VOLUME = %.3lf\n", volume);
 
    return 0;
}