/*

Crie uma struct chamada "Pessoa" que contenha os seguintes campos: nome, idade e altura. Em seguida,
escreva um programa que declare uma variável do tipo Pessoa, preencha seus campos e imprima os valores..

*/

// Lucas Gabriel Pereira de Menezes - UC22101832 
// Estrutura de dados - prof Osman

#include <stdio.h>
#include <string.h>

//Variaveis

typedef struct{

    char nome[50];
    int idade;
    float altura;

}Pessoa;

//Prototipos dos Metodos e Funcoes

void imprimePessoa(Pessoa p);
void setPessoa(Pessoa *p, char nome[50], int idade, float altura);


//Main

int main(){

    Pessoa x;
    setPessoa(&x, "Lucas Menezes", 26, 1.90);
    imprimePessoa(x);


    return 0;
}


// Implementacao dos Metodos e Funcoes

void imprimePessoa(Pessoa p){
  
    printf("\n**********************************\n");
    printf("Nome: %s\nIdade: %d anos\nAltura %.2f m", p.nome, p.idade, p.altura);
    printf("\n**********************************\n");
}

void setPessoa(Pessoa *p, char nome[50], int idade, float altura){
    
    strcpy(p->nome,nome);
    (*p).idade = idade;
    p->altura = altura;

}