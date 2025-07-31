#include <stdio.h>

int main() {

    //Variaveis da primeira carta 01
    char Estado[50];
    char Cidade[50];
    int População;
    double Área;
    float PIB;
    int PontosTurísticos;

//Titulo do programa
    printf("Cadastro das Cartas\n   super trunfo\n");

//Informações da primeira carta 
    printf("\n   Carta 01\n");

//Informações do primeiro Estado
    printf("Nome do Estado: ");
    scanf("%s", Estado);

//informações da primeira cidade
    printf("Nome da Cidade: ");
    scanf("%s", Cidade);
    
    printf("População: ");
    scanf("%d", &População);

    printf("Área: ");
    scanf("%lf", &Área);

    printf("PIB: ");
    scanf("%f", &PIB);

    printf("Número de Pomtos turísticos: ");
    scanf("%d", &PontosTurísticos);


return 0;
}