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
void imprimeContato(Contato c[], int i);
void listarContatos(Contato c[], int* qtd_contatos);
void procurarContato(Contato c[], char nome[50], int* qtd_contatos);
int main(){

    Contato c[TAM_CONTATO];
    int qtd_contatos = 0, i = 0;
    int escolha = 0;
    char nome[50];

    do{
        system("cls");
        printf("\n********** Menu **********\n");
        printf("1 - Cadastrar novo contato\n");
        printf("2 - Listar todos os contatos\n");
        printf("3 - Buscar um contato pelo nome\n");
        printf("4 - Sair\n");

        scanf("%d", &escolha);


        switch (escolha)
        {
        case 1:
            cadastroContato(c, &qtd_contatos);
            qtd_contatos++;
            system("PAUSE");
            break;
        case 2:
            listarContatos(c, &qtd_contatos);
            system("PAUSE");
            break;
        case 3:
            printf("Digite o nome: ");
            scanf(" %[^\n]s", &nome);
            procurarContato(c, nome, &qtd_contatos);
            system("PAUSE");
            break;
        
        default:
            break;
        }
    }while(escolha != 4);

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

void listarContatos(Contato c[], int* qtd_contatos){
    int i=0;
    for(i=0;i<*qtd_contatos;i++){
        imprimeContato(c, i);
    }
}


void imprimeContato(Contato c[], int i){
    printf("Nome: %s\tTelefone: %s\n", c[i].nome, c[i].telefone);
}

void procurarContato(Contato c[], char nome[50], int* qtd_contatos ){
    int i=0;
    for(i=0;i<=*qtd_contatos;i++){
        if(strcmp(c[i].nome,nome) == 0){
            imprimeContato(c, i);
        }
    }

}
