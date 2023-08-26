/*

Crie uma struct chamada "Livro" com campos para título, autor e ano de publicação. Escreva um programa
que permita ao usuário adicionar informações de livros, listar todos os livros cadastrados e buscar livros por autor.

*/

//Lucas Gabriel Pereira de Menezes - UC22101832

#include <stdio.h>
#define TAM_LIVRO 10

typedef struct {
    char titulo[50];
    char autor[50];
    int anoPublicacao;

}Livro;

void setLivro(Livro l[], char titulo[50], char autor[15], int anoPublicacao, int* qtd_livros);  //Cadastro por passagem de parametros (Constructor)
void cadastroLivro(Livro l[], int* qtd_livros);                               //Cadastro por entrada de dados 
void imprimeLivro(Livro c[], int i);
void listarLivro(Livro c[], int* qtd_livros);
void procurarLivro(Livro c[], char nome[50], int* qtd_livros);


int main(){

    Livro l[TAM_LIVRO];
    int escolha=0, qtd_livros=0;
    char autor[50];


    do{
        system("cls");
        printf("\n********** Menu **********\n");
        printf("1 - Cadastrar novo Livro\n");
        printf("2 - Listar todos os Livros\n");
        printf("3 - Buscar um livro pelo autor\n");
        printf("4 - Sair\n");

        scanf("%d", &escolha);


        switch (escolha)
        {
        case 1:
            cadastroLivro(l, &qtd_livros);
            qtd_livros++;
            system("PAUSE");
            break;
        case 2:
            listarLivro(l, &qtd_livros);
            system("PAUSE");
            break;
        case 3:
            printf("Digite o nome do autor: ");
            scanf(" %[^\n]s", &autor);
            procurarLivro(l, autor, &qtd_livros);
            system("PAUSE");
            break;
        
        default:
            break;
        }
    }while(escolha != 4);

    return 0;
}


void setLivro(Livro l[], char titulo[50], char autor[15], int anoPublicacao, int* qtd_livros){
    strcpy(l[*qtd_livros].titulo,titulo);
    strcpy(l[*qtd_livros].autor,autor);
    l[*qtd_livros].anoPublicacao = anoPublicacao;

}

void cadastroLivro(Livro l[], int* qtd_livros){
    printf("****** Cadastro de Livro ******\n");
    printf("Titulo: ");
    scanf(" %[^\n]s", &l[*qtd_livros].titulo);
    printf("Autor: ");
    scanf(" %[^\n]s", &l[*qtd_livros].autor);
    printf("Ano publicacao: ");
    scanf("%d", &l[*qtd_livros].anoPublicacao);

}


void imprimeLivro(Livro l[], int i){

    printf("titulo: %s\tautor: %s\tano publicacao: %d\n", l[i].titulo, l[i].autor, l[i].anoPublicacao);

}


void listarLivro(Livro l[], int* qtd_Livro){
    int i=0;
    for(i=0;i<*qtd_Livro;i++){
        imprimeLivro(l, i);
    }
}

void procurarLivro (Livro l[], char autor[50], int* qtd_livros ){
    int i=0;
    for(i=0;i<=*qtd_livros;i++){
        if(strcmp(l[i].autor,autor) == 0){
            imprimeLivro(l, i);
        }
    }

}
