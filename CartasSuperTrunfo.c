#include <stdio.h>

int main() {

    //Variaveis da primeira carta 01
    char Estado[50];
    char Cidade[50];
    int Populacao;
    double Area;
    float PIB;
    int PontosTuristicos;
    char codigo[50];

//Titulo do programa
    printf("Cadastro das Cartas\n   super trunfo\n");

//Informações da primeira carta 
    printf("\n   Carta 01\n");

//Informações do primeiro Estado
    printf("Nome do Estado: ");
    scanf("%s", Estado);
    printf("Código da Carta: ");
    scanf("%s", codigo);

//informações da primeira cidade
    printf("Nome da Cidade: ");
    scanf("%s", Cidade);
    
    printf("População: ");
    scanf("%d", &Populacao);

    printf("Área: ");
    scanf("%lf", &Area);

    printf("PIB: ");
    scanf("%f", &PIB);

    printf("Número de Pontos turísticos: ");
    scanf("%d", &PontosTuristicos);

//carta apresentada
    printf("\n   Carta Apresentada\n");
    printf("CÓDIGO: %s\n", codigo);
    printf("ESTADO: %s\n", Estado);
    printf("CIDADE: %s\n", Cidade);
    printf("POPULAÇÃO: %d\n", Populacao);
    printf("ÁREA: %.2lf km²\n", Area);
    printf("PIB: R$ %.2f bilhões\n", PIB);
    printf("PONTOS TURÍSTICOS: %d\n", PontosTuristicos);



return 0;
}