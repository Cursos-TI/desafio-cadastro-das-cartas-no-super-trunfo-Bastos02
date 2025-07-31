#include <stdio.h>

int main() {

    //Variaveis da primeira carta 01
    char Estado[50];
    char Cidade[50];
    int População;
    float Área;

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
    scanf("%f", Área);
     


return 0;
}