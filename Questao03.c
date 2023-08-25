/*

Crie uma struct chamada "Ponto" que represente um ponto no plano cartesiano com coordenadas x e y.
Em seguida, implemente funções para calcular a distância entre dois pontos e a inclinação da reta que os 
conecta.

 Formula distancia: dAB² = (xB – xA)² + (yB – yA)². 

 
*/

#include <stdio.h>
#include <math.h>


typedef struct{
    float x;
    float y;

}Ponto;


float distanciaPonto(Ponto p1, Ponto p2);
float inclinacaoReta(Ponto p1, Ponto p2);


int main(){

    Ponto ponto1 = {1.0, 2.0};
    Ponto ponto2 = {4.0, 6.0};

    float distancia = distanciaPonto(ponto1, ponto2);
    float inclinacao = inclinacaoReta(ponto1, ponto2);

    printf("Distancia entre os pontos: %.2f\n", distancia);
    
    
    printf("Inclinacao da reta: %.2f\n", inclinacao);




    return 0;
}

float distanciaPonto(Ponto p1, Ponto p2){
    float distancia;
    distancia = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
    return distancia;
}

float inclinacaoReta(Ponto p1, Ponto p2){
    float inclinacao;
    
    inclinacao = (p2.y - p1.y) / (p2.x - p1.x);
    return inclinacao;
    

}

