#include <stdio.h>
#include <stdlib.h>

double potencia(double , unsigned);
unsigned long long factorial(unsigned);
double seno (double, unsigned);

double resultado, x;
unsigned N;



int main(int argc, char *argv[]) {
  printf("Digite el valor de x");
  scanf("%lf",&x);
  printf("Digite el numero de terminos que desee que tenga la serie");
  scanf("%u",&N);
  resul = seno(x,N);
  printf("seno(x) = %lf\n",resultado); 
  system("PAUSE");	
  return 0;
}

double seno (double x, unsigned N) {
  int i, den = 1, signo;
  double pot, resul = 0;
  unsigned long long fac;
  double term;
  
  for(i=1;i<=N;i++) {
    pot = potencia(x,den);
	fac = factorial(den);
    term = pot/fac;
    if(signo == 0) {
      resul+=term;
      signo=1;   
    }
    else {
      resul-=term;
      signo=0;
    }
    den+=2;                      
  } 
  return term;
}

double potencia(double x, unsigned y) {
  int i;
  double pot = 1;
  for(i=1;i<=y;i++){
    pot*=x;
  }
  return pot;
}

unsigned long long factorial(unsigned x) {
  int i;
  unsigned long long fac = 1;
  for(i=1;i<=x;i++){
    fac = fac*i;
  }
  return fac;
}




