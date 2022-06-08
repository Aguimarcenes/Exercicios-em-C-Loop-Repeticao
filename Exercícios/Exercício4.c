//Fazer um programa que calcule e escreva o número de grãos de milho que podem ser colocados em um tabuleiro de xadrez, colocando 1 no primeiro quadro e nos quadros seguintes o dobro do quadro anterior. (obs.: esse número cresce muito rápido, tenha o cuidado de testar se ele não sofre um overflow).
void main()
{
	int t=1;
	float grao=1, total=1;
	
	while( t <= 63){
		grao = (grao*2);
		total += grao;
		t++;
	}
	
	printf("Voce consegue colocar %lf graos no tabuleiro\n", total);
}