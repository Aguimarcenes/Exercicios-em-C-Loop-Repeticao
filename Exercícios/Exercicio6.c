//Para fazer o balanço mensal de um armazém, faça um programa que que leia para um
//número qualquer de mercadorias diferentes o preço de custo, o preço de venda e a
//quantidade vendida. A partir desses dados imprima: o número total de mercadorias
//diferentes lidas, o faturamento total e o lucro total do armazém.
void main()
{
	int quant, produtos, i;
	float compra, venda, saiu, faturamento=0, lucro=0;
	
	printf("Digite a quantidade de produtos que entraram em estoque: ");
	scanf("%d", &produtos);
	
	for (i=0 ; i<produtos; i++){
		printf("quantos produtos?");
		scanf("%d", &quant);
		printf("qual valor de compra?");
		scanf("%f", &compra);
		printf("qual valor venda?");
		scanf("%f", &venda);
		printf("quantos produtos vendidos?");
		scanf("%f", &saiu);	
		if(saiu>quant){
			printf("Seu estoque esta errado!");
			continue;
		}
		
		faturamento += (venda*saiu);
		lucro += ((venda-compra)*saiu);
	}
	
	printf("Voce deu entrada em %d produtos diferentes, com um faturamento de %f reais e um lucro de %f reais.", produtos, faturamento, lucro);
}