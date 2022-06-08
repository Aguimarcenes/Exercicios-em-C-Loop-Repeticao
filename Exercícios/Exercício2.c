//Faça um programa que leia um conjunto de números positivos, sendo o conjunto destes números finalizado quando for digitado um número negativo. Ao final, imprima o maior e o menor número lido, e a média deles.
void main()
{
	float n=0, max=0, min=0, cont=0, media=0;
	
	while (n >= 0)
	{
		printf("Digite um valor: ");
		scanf("%f", &n);
		
		if (n < 0)
			break;

		if (media == 0){
			max = n;
			min = n;
		}
		
		if (n < min)
			min = n;
		else if (n > max)
			max = n;
	
		cont += n;
		media++;
	}
	printf("Você parou o programa.\n");
	printf("A media dos valores digitados e: %f\n",cont/media);
	printf("O maior dos valores digitados e: %f\n",max);
	printf("O menor dos valores digitados e: %f\n",min);
  }