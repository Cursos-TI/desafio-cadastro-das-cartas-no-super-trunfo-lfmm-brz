/*
 Super Trunfo - Países
 Nível Novato - Cadastro das Cartas
 Aluno: Luiz Fernando Machado Marques
 Matrícula: 202501463101
 
 Devido a uma limitação do scanf, não e possível o uso de espaço nos nomes das cidades.

 Super Trunfo com o tema "Países". As cartas serão divididas por estados, cada um com quatro cidades.
 Cada país será dividido em oito estados, identificados pelas letras de A a H. Cada estado terá quatro cidades,
 numeradas de 1 a 4. A combinação da letra do estado e o número da cidade define o código da carta (por exemplo, A01, A02, B01, B02).
*/

#include <stdio.h>

int main(){
    char codigo_carta[4]; // 3 CARACTERES MAIS O ZERO QUE INDICA O FIM DA STRING
    char nome_cidade[50]; // 49 CARACTERES MAIS O ZERO QUE INDICA O FIM DA STRING
    int populacao = 0;
    float area = 0;
    float pib = 0;
    int pontos_tur = 0;

	printf("***********************************************************************************************************************\n");
    printf("* Super Trunfo com o tema Países. As cartas serão divididas por estados, cada um com quatro cidades. Cada país será   *\n");
    printf("* dividido em oito estados, identificados pelas letras de A a H. Cada estado terá quatro cidades, numeradas de 1 a 4. *\n");
    printf("* A combinação da letra do estado e o número da cidade define o código da carta (por exemplo, A01, A02, B01, B02).    *\n");
    printf("***********************************************************************************************************************\n\n");
    
    printf("Cadastro de Cartas\n\n");

	printf("Digite o código da carta:\n");
	scanf("%s", codigo_carta);

	printf("Digite o nome da cidade (não use espaço, use \'-\' ou \'_\'):\n");
	scanf("%s", nome_cidade);

	printf("Digite a populaçâo da cidade:\n");
	scanf("%d", &populacao);

	printf("Digite a área (kM2) da cidade:\n");
	scanf("%f", &area);
	
	printf("Digite o PIB (R$) da cidade:\n");
	scanf("%f", &pib);
	
	printf("Digite o número de pontos turísticos:\n");
	scanf("%d", &pontos_tur);
	
	printf("\nCarta Cadastrada:\n");
	printf("Código: %s\n", codigo_carta);
	printf("Cidade: %s\n", nome_cidade);
	printf("População: %d habitantes.\n", populacao);
	printf("Área: %f Km2.\n", area);
	printf("PIB: R$ %f\n", pib);
	printf("Pontos turísticos: %d\n", pontos_tur);
	
    return 0;
}
