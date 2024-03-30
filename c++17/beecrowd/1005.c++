#include <cstdio>
 
using namespace std;
 
int main() {
 
    double a, b, media;

    scanf("%lf", &a);
    scanf("%lf", &b);

    media = a / 4 + (b / 4) * 3;

    printf("MEDIA = %.5f\n", media);

    return 0;
}