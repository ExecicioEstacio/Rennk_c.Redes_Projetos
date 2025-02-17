#include <stdio.h>

int main(){
    int idade;
    int matrícula;
    float altura;
    char nome [50];

    printf("Digite o seu nome: \n");
    scanf("%s", & nome);

    printf("Digite sua Matricula: \n");
    scanf("%d", &matrícula);

    printf("Digite sua Idade: \n");
    scanf("%d", &idade);

    printf("Digite sua Altura: \n");
    scanf("%f", &altura);
    
    

    printf("Nome do aluno: %s - Matricula: %d", nome, matrícula);
    printf("Idade: %d - altura: %f", idade, altura);

    return 0;


}