#include <iostream>
 
using namespace std;
 
int main() {
 
    int num, hor;
    double sal;

    scanf("%d", &num);
    scanf("%d", &hor);
    scanf("%lf", &sal);

    sal = hor * sal;

    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2lf\n", sal);
 
    return 0;
}