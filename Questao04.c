/*
Crie uma struct chamada "Contato" que armazene o nome e o número de telefone de uma pessoa. escreva
um programa que permita ao usuário adicionar contatos, listar todos os contatos e buscar um contato pelo nome.

*/

#include <stdio.h>
#include <string.h>
#define TAM_CONTATO 10

typedef struct{
    char nome[50];
    char telefone[15];
}Contato;

void setContato(Contato c[], char nome[50], char telefone[15], int* qtd_contatos);  //Cadastro por passagem de parametros (Constructor)
void cadastroContato(Contato c[], int* qtd_contatos);                               //Cadastro por entrada de dados  
void imprimeContato(Contato c);

int main(){

    Contato c[TAM_CONTATO];
    int qtd_contatos = 0;
    int decisao;
    do{
        system("cls");
        cadastroContato(c, &qtd_contatos);
        qtd_contatos++;
        cadastroContato(c, &qtd_contatos);
        qtd_contatos++;
        setContato(c, "Cineide Barbosa", "976654331", &qtd_contatos);


        imprimeContato(c[0]);
        imprimeContato(c[1]);
        imprimeContato(c[2]);
        printf("Deseja continuar?\n - [0] - sim\n - [1] - nao \nEscolha: ");
        scanf("%d", &decisao);
    }while(decisao == 0);

    return 0;
}


void setContato(Contato c[], char nome[50], char telefone[15], int* qtd_contatos){
    strcpy(c[*qtd_contatos].nome,nome);
    strcpy(c[*qtd_contatos].telefone,telefone);

}

void cadastroContato(Contato c[], int* qtd_contatos){
    printf("****** Cadastro de Contato ******\n");
    printf("Nome: ");
    scanf(" %[^\n]s", &c[*qtd_contatos].nome);
    printf("Telefone: ");
    scanf(" %[^\n]s", &c[*qtd_contatos].telefone);

}


void imprimeContato(Contato c){

    printf("\n************************************************\n");
    printf("Nome: %s\tTelefone: %s", c.nome, c.telefone);
    printf("\n************************************************\n");

}
