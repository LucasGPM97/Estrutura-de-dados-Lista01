/*

Crie uma struct chamada "Tipo" que possa armazenar um valor do tipo inteiro, um valor do tipo ponto
flutuante e uma letra. Escreva um programa que demonstre o uso da struct, atribuindo valores de diferentes 
tipos e imprimindo-os.


*/

typedef struct{
    int numInteiro;
    float numFlutuante;
    char letra;

}Tipo;


void imprimeTipo(Tipo x);
void setTipo(Tipo *x, int numInteiro, float numFlutuante, char letra); //Constructor

int main(){

    Tipo um;
    setTipo(&um, 10, 12.543, 'g');
    imprimeTipo(um);


}


void imprimeTipo(Tipo x){
    printf("\n************************************************\n");
    printf("Valor da variavel do tipo inteiro: %d\n", x.numInteiro);
    printf("Valor da variavel do tipo ponto flutuante: %.2f\n", x.numFlutuante);
    printf("Valor da variavel do tipo char: %c", x.letra);
    printf("\n************************************************\n");
}

void setTipo(Tipo *x, int numInteiro, float numFlutuante, char letra){
    x->numInteiro=numInteiro;
    x->numFlutuante=numFlutuante;
    x->letra=letra;
}