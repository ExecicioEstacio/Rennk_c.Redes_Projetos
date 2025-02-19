#include <stdio.h>

int main(){
int idade;
int matricula;
float altura;
char nome [55];

printf("digite sua idade: \n");
scanf("%d", &idade);

printf("digite sua altura: \n");
scanf("%f", &altura);

printf("digite o seu nome: \n");
scanf("%s", &nome);


printf("digite sua matricula: \n");
scanf("%d", &matricula);

printf("nome do aluno: %s", nome);

printf("Matricual: %d", matricula);

printf("indade: %d - altura %f", idade, altura);

return 0;
}