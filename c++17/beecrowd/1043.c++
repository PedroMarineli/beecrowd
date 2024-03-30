#include <cstdio>  
#include <iostream>

int main(){
    float a, b, c, p = 0, s = 0, t = 0;

    scanf("%f %f %f", &a, &b, &c);

    if (a>=b && a>=c && b>=c) {
        p = a;
        s = b;
        t = c;
        
    }else if (a>=b && a>=c && b<=c) {
            p = a;
            s = c;
            t = b;
        }
    
    if (b>=a && b>=c && c>=a) {
        p = b;
        s = c;
        t = a;
        
    }else if (b>=a && b>=c && c<=a) {
            p = b;
            s = a;
            t = c;
        }

    if (c>=a && c>=b && b>=a) {
        p = c;
        s = b;
        t = a;
        
    }else if (c>=a && c>=b && b<=a) {
            p = c;
            s = a;
            t = b;
        }

    if ((s + t) > p) {
        printf("Perimetro = %.1f\n", a+b+c);
    }else {
        printf("Area = %.1f\n", ((a+b)*c)/2);
    }
}