/*

Crie uma struct chamada "Livro" com campos para título, autor e ano de publicação. Escreva um programa
que permita ao usuário adicionar informações de livros, listar todos os livros cadastrados e buscar livros por autor.

*/

//Lucas Gabriel Pereira de Menezes - UC22101832

#include <stdio.h>

typedef struct {
    char titulo[50];
    char autor[50];
    int anoPublicacao;

}Livro;

void setLivro(Livro l[], char titulo[50], char autor[15], int* qtd_livros);  //Cadastro por passagem de parametros (Constructor)
void cadastroContato(Livro l[], int* qtd_livros);                               //Cadastro por entrada de dados  
void imprimeContato(Livro l);

int main(){

    Livro l;





    return 0;
}


void setLivro(Livro l[], char titulo[50], char autor[15], int* qtd_livros){
    strcpy(l[*qtd_livros].titulo,titulo);
    strcpy(l[*qtd_livros].autor,autor);

}

void cadastroLivro(Livro l[], int* qtd_livros){
    printf("****** Cadastro de Livro ******\n");
    printf("Titulo: ");
    scanf(" %[^\n]s", &l[*qtd_livros].titulo);
    printf("Autor: ");
    scanf(" %[^\n]s", &l[*qtd_livros].autor);

}


void imprimeLivro(Livro l){

    printf("\n************************************************\n");
    printf("titulo: %s\tautor: %s", l.titulo, l.autor);
    printf("\n************************************************\n");

}