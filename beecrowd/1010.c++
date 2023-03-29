#include <iostream>
 
using namespace std;
 
int main() {
 
     int cod1, num1; float val1;
     int cod2, num2; float val2, soma;

     scanf("%d", &cod1);
     scanf("%d", &num1);
     scanf("%f", &val1);

     scanf("%d", &cod2);
     scanf("%d", &num2);
     scanf("%f", &val2);

    soma = num1 * val1 + num2 * val2;

    printf("VALOR A PAGAR: R$ %.2f\n", soma);
 
    return 0;
}