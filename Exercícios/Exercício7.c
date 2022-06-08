//Faça um programa que calcule o Máximo Divisor Comum entre dois números. void main()
void main()
{
  int resto, a, b;
  
  printf("Digite o 1o valor: ");
  scanf("%d", &a);
  
  printf("Digite o 2o valor: ");
  scanf("%d", &b);

  while(b != 0){
    resto = a % b;
    a = b;
    b = resto;
  }
 
	printf("O MDC e %d", a);
}