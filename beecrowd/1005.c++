#include <cstdio>
 
using namespace std;
 
int main() {
 
    double a, b, media;

    scanf("%lf", &a);
    scanf("%lf", &b);

    media = 2/(a + b);

    printf("MEDIA = %.5f\n", media);

    return 0;
}