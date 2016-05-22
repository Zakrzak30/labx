//Napisać program, dla danej funkcji ciągłej   f:ℜ→ℜ   liczący jej przybliżoną całkę oznaczoną.
//Dokładniej:
//Funkcja   f   powinna być zdefiniowana jako funkcja języka C, z nagłówkiem
//double f(double x)

//Danymi do programu powinny być
//granice całkowania   a,b takie że   a<b ; oraz
//n, oznaczający liczbę pododcinków, na które podzielony zostaje odcinek   [a. .b] .
//Program powinien liczyć sumę pól prostokątów o szerokości   (b−a)/n   i wysokości wyznaczonej funkcją   f , jak na rysunku obok.
//Wypróbować ten program dla kilku różnych funkcji i sprawdzić, czy całki wychodzą w przybliżeniu poprawne, oraz jak na tą poprawność wpływa liczba   n . 
#include<stdio.h>
#include<math.h>
  int i,n;
  float x0,xn,h,y[20],so,se,ans,x[20];
float f(float x){
  return(1/(1+pow(x,2)));
}
//Metoda Simpsona w celu porownania
float simpson(){
  so=0;
  se=0;
  for(i=1; i<n; i++){
  if(i%2==1){
    so=so+y[i];
  }
  else{
    se=se+y[i];
    }
  }
  ans=h/3*(y[0]+y[n]+4*so+2*se);
  return ans;
}
//Metoda prostokątów
float prostokat(){
  ans=0;
  for(i=0; i<n; i++){
  ans = ans + y[i]*h;
}
  return ans;
}
int main(){
  printf("\n Podaj poczatek i koniec przedzialu calkowania\n oraz liczbe podprzedzialow x0,xn,n:\n");
  scanf("%f%f%d",&x0,&xn,&n);
  if(n%2==1){
    n=n+1;
  }
  h=(xn-x0)/n;
  for(i=0; i<=n; i++){
    x[i]=x0+i*h;
    y[i]=f(x[i]);
  }
  ans = prostokat();
  printf("\nWynik metody prostokatow: %f\n", ans);
  ans = simpson();
  printf("Wynik metody Simpsona   : %f\n", ans);
//calka nieoznaczona z 1/(1+x^2) to arctg x 
//dokladny wynik to atan(xn) - atan(x0)
  ans = atan(xn) - atan(x0);
  printf("Dokladny wynik          : %f\n", ans);
  }
