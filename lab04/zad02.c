#include <stdio.h>
#include <complex.h>
#include <math.h>

int main() {

    //tożsamośc Eulera za pomocą funkcji cpow:
    double complex imag_unit = 0 - 1* I;
    double complex result= cpow(M_E, M_PI*imag_unit);
    printf("\nTozsamosc Eulera: e^pi*jednostka urojona+1 = %f\n", creal(result)+cimag(result)+1); // tożsamość spełniona, drukuje "0"

    //podnoszenie e do potęgi urojonej
    //e^ri = cos(r) + sin(r)*i
    int r=2;
    result= cos(r) + sin(r)*imag_unit;
    printf("e^%di=%lf%+lfi\n", r, creal(result),cimag(result)); // ok - https://www.wolframalpha.com/input/?i=e^%282i%29

    //podnoszenie do potegi zespolonej
    double complex z = 2 + 2 * I;
    result= cpow(M_E,z);
    printf("e^(%lf%+lfi) = %lf%+lfi\n\n",creal(z), cimag(z), creal(result),cimag(result) ); // ok - https://www.wolframalpha.com/input/?i=e^%282%2B2i%29

    return 0;
}
