//Desejando obter a média aritmética das idades dos alunos do curso de Odontologia, do primeiro ano, do ano de 1998, construir um programa que leia, calcule e mostre a média aritmética das idades. O programa é encerrado quando for lida uma idade igual a zero e deve rejeitar idades negativas, pedindo que o usuário redigite. 
void main()
{
	float idade, contador=0, media=0;

	do{
		printf("Digite a idade do aluno: ");
		scanf("%f", &idade);
		if (idade < 0){
			printf("Digite um valor inteiro!\n");
			continue;
		}
		
		if(idade>0){
		media += idade;
		contador++;
	}
		
	}while(idade != 0);
		
	printf("Você parou o programa!\n");
	if(contador == 0)
		printf("Nenhum aluno foi cadastrado!\n");
	else
		printf("A media da turma é de %.2f anos!\n", media/contador);
}