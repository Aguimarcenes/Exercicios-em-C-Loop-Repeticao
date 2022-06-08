//Série de Fibbonacci é gerada da seguinte forma: os dois primeiros termos são 1, os 
//demais são dados pela soma dos dois anteriores.  Faça um programa que imprima os 
//“n” primeiros termos da série, sendo “n” dado pelo usuário. 

void main() {

double t1= 1, t2=1, t3, n;
  printf("Digite quantas vezes voce fará a seguencia de fibonacci: ");
  scanf("%lf", &n);

  printf("%.0lf\n\n", t1);
  printf("%.0lf\n\n", t2);
  for(n - 2; n > 0; n--) {
    t3 = (t1+t2);
    printf("%.0lf\n\n", t3);
    t1 = t2;
    t2 = t3;
  }   
}