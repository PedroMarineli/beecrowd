#include <iostream>
 
using namespace std;
 
int main() {
 
    char nome;
    double sal, ven;

    scanf("%s", &nome);
    scanf("%lf", &sal);
    scanf("%lf", &ven);

    sal = (ven * 15) / 100 + sal;

    printf("TOTAL = R$ %.2lf\n", sal);
 
    return 0;
}