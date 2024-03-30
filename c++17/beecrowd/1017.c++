#include <iostream>

int main (){
    int kmh, temp; float kml;

    scanf("%d", &temp);
    scanf("%d", &kmh);

    kml = (temp*kmh);

    printf("%.3f\n", kml/12);
}