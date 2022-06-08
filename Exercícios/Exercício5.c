// Um dado material radioativo perde metade de sua massa a cada 50 s. Dada a massa inicial em gramas, fazer um algoritmo que determine o tempo necessário para que essa massa seja menor que 0,5g. 
#define TEMPO 50

void main()
{
	float grama, gramaf=0, duracao=0;
	
	printf("Digite o peso do material em gramas: ");
	scanf("%f", &grama);
	
	do{
		grama = (grama/2);
		duracao += TEMPO;
	}while(grama > 0.5);
	
	printf("O processo demorou %f segundos!", duracao);	
}