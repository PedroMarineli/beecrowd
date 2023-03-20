#include <cstdio>
 
using namespace std;
 
int main() {
 
     double a, b, c, media;

     scanf("%lf", &a);
     scanf("%lf", &b);
     scanf("%lf", &c);

    media = a / 5 + b / 3.33 + c / 2;

    printf("MEDIA = %.1lf\n", media);

    return 0;
}