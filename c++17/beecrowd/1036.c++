#include <cstdio>
#include <iostream>
#include <cmath>

int main (){
    double a, b, c, tri, bas1, bas2;

    scanf("%lf %lf %lf", &a, &b, &c);

    tri = (b*b) - (4 * a * c);
    tri = sqrt(tri);
    bas1 = ((-b + tri)) / (2 * a);
    bas2 = ((-b - tri)) / (2 * a);

    if ((b*b) - (4 * a * c) < 0 || a == 0) {
        printf("Impossivel calcular\n");
    }else{
        printf("R1 = %.5lf\nR2 = %.5lf\n", bas1, bas2);
    }
}