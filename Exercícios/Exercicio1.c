//Faça um programa que calcule a média de quatro notas de um aluno. Não devem ser permitidas entradas de notas maiores que 10 ou menores que 0. 

#define NUM_ALUNOS 15

void main()
{
	float nota[NUM_ALUNOS], media=0;
	int i, abaixo=0;

	for(i=0; i < NUM_ALUNOS; i++)
	{
		do {
		printf("Qual a nota do %do. aluno? ", i+1);
		scanf("%f", &nota[i]);
			if (nota[i] < 0 || nota[i] > 10)
			printf("Nota invalida! Digite novamente.\n");
		} while (nota[i] < 0 || nota[i] > 10);
		
		media += nota[i];
	}
	media /= NUM_ALUNOS;
	printf("Media da turma: %.1f\n", media);

	for(i=0; i<NUM_ALUNOS; i++)
		if(nota[i] < media)
		abaixo++;
		
	printf("Numero de alunos abaixo da media na turma: %d\n", abaixo);
} 