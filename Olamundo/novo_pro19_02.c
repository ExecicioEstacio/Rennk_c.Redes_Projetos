#include <stdio.h>

int main(){

    char nome[50];
    int idade;
    float altura;
    int matricula;
    int telefone;
    char endereco[80];

    printf("digitte seu nome: \n");
    scanf("%s", &nome);

    printf("digite a idade: \n");
    scanf("%d", &idade);

    printf("digite sua altura: \n");
    scanf("%f", &altura);

    printf("digite sua matricula: \n");
    scanf("%d", &matricula);

    printf("digite seu telefone: \n");
    scanf("%d", &telefone);

    printf("insira seu endereço: \n");
    scanf("%s", &endereco);

    printf("nome: %s - idade: %d - altura: %f", nome, idade, altura);

    printf(" telefone: %d - endereço: %s", telefone, endereco);

    return 0;


}