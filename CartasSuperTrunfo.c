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
    printf("\nCadastro das Cartas\n   super trunfo\n");

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

//Variaveis da segunda carta 02
    char Estado2[50];
    char Cidade2[50];
    int Populacao2;
    double Area2;
    float PIB2;
    int PontosTuristicos2;
    char codigo2[50];

//Titulo do programa
    printf("\n Cadastro das Cartas\n   super trunfo\n");

//Informações da segunda carta 
    printf("\n   Carta 02\n");

//Informações do segundo Estado
    printf("Nome do Estado: ");
    scanf("%s", Estado2);
    printf("Código da Carta: ");
    scanf("%s", codigo2);

//informações da segunda cidade
    printf("Nome da Cidade: ");
    scanf("%s", Cidade2);
    
    printf("População: ");
    scanf("%d", &Populacao2);

    printf("Área: ");
    scanf("%lf", &Area2);

    printf("PIB: ");
    scanf("%f", &PIB2);

    printf("Número de Pontos turísticos: ");
    scanf("%d", &PontosTuristicos2);

//carta apresentada
    printf("\n   Carta Apresentada\n");
    printf("CÓDIGO: %s\n", codigo2);
    printf("ESTADO: %s\n", Estado2);
    printf("CIDADE: %s\n", Cidade2);
    printf("POPULAÇÃO: %d\n", Populacao2);
    printf("ÁREA: %.2lf km²\n", Area2);
    printf("PIB: R$ %.2f bilhões\n", PIB2);
    printf("PONTOS TURÍSTICOS: %d\n", PontosTuristicos2);


return 0;
}