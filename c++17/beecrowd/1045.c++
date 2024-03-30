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

    printf("%.1f %.1f %.1f\n", p, s, t);

    if (p>=s+t) {
        printf("NAO FORMA TRIANGULO\n");
    }else {
        
        if ((p*p)==(s*s)+(t*t)) {
        printf("TRIANGULO RETANGULO\n");
    }
    if ((p*p)>(s*s)+(t*t)) {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if ((p*p)<(s*s)+(t*t)) {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if (p==s && p==t) {
        printf("TRIANGULO EQUILATERO\n");
    }else if (p==s or p==t or s==t) {
       printf("TRIANGULO ISOSCELES\n");
    }
    }

}

