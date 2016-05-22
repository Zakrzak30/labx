#include <stdio.h>
#include <complex.h>
#include <math.h>
#include<stdlib.h>

int factorial(int n)
{
  return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

int main() {
//tożsamośc Eulera za pomocą funkcji cpow:
  float complex imag_unit = 0 + 1* I;
  float complex result= cpow(M_E, M_PI*imag_unit);
  printf("\nTozsamosc Eulera: e^pi*i+1 = %f\nPowinno być 0\n", crealf(result)+cimagf(result)+1); // tożsamość spełniona, drukuje "0"
//podnoszenie e do potęgi urojonej
//e^ri = cos(r) + sin(r)*i
  int r=2;
  result= cos(r) + sin(r)*I;
  float complex result1= cpow(M_E, 2*I);
  printf("\ne^%di=%f%+fi\nPowinno być %f+%fi\n", r, crealf(result),cimagf(result),crealf(result1),cimagf(result1))  ;
//podnoszenie do potegi zespolonej
//e^z=sum_{k=0}^{inf} z^k/k!
  float complex z = 1 + 1 * I;
  result= cpow(M_E,z);
  result1=0;
  float epsilon=0.000001;
  r=0;
    while(cabs(result1-result)){
      result1=result1+(cpow(z,r)/factorial(r));
      r=r+1;
    }
  printf("\ne^(%f%+fi) =%f%+fi\nPowinno byc %f%+fi z dokladnoscia modulu do %f\n",crealf(z), cimagf(z), crealf(result1),cimagf(result1), crealf(result),cimagf(result),epsilon );
}
//Szereg jest zbierzny dla liczy z=1+I
//W innych przypadkach (np. 2+2I dla typu zmiennych użytych w programie)  
//tak zdefiniowany szereg nie jest zbierzny ponieważ jego wyrazy wykraczają
//poza dopuszczalny zakres wartosci
//Przykladowo juz 21! nie da sie zapisac na 64 bitach 
//2^64 = 18446744073709551616
//21!  = 51090942171709440000
//Kiedy dodatkowo z^k zacznie przekraczac swoje douszczalne wartosci
//otrzymywane wyniki przestaja byc liczbami
