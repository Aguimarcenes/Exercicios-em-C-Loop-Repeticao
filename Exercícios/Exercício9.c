//Numa universidade, o sistema de avaliação é o seguinte: para passar direto, o aluno
//precisa ter média do período (mp) igual ou superior a 7 pontos. Caso contrário, o
//aluno será submetido a exame final, sendo a sua média final (mf) calculada pela
//seguinte fórmula: mf = 0.6mp + 0.4ne, onde ne é a nota do exame. Essa média final
//deverá então ser igual ou superior a 5 pontos para que o aluno seja aprovado. Por
//outro lado, a média do período é calculada através da média das notas dos créditos,
//cujo número é diferente para cada disciplina. Faça um programa que leia do usuário o
//número de créditos da disciplina, as notas dos créditos, e se necessário calcule a
//nota que o aluno precisa tirar no exame final para ser aprovado. Se antes de terminar
//todos os créditos o aluno já estiver aprovado, avise isso a ele e encerre a leitura de
//notas (utilize aqui um comando break). 
void main()
{
	int quant, i;
	float mp, nota, ne, nf, media;
	
	printf("Quantas notas serao digitadas?\n ");
	scanf("%d", &quant);
	
	for (i=0 ; i<quant; i++){
		printf("Digite a %do nota: ", i+1);
		scanf("%f", &nota);
		media += nota;
	}
	mp=media/i;
	if(mp>=7){
		printf("Voce foi aprovado no semestre!\n");
	}
	else{
	printf("Qual foi sua nota no exame final?\n ");
	scanf("%d", &ne);
	nf = (0.6*mp) + (0.4*ne);
		if(nf>=5)
		printf("Parabens voce passou!");
		else
		printf("Voce esta reprovado");
	}
}