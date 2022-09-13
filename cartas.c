// Savanna Passarela

#include<stdio.h>

int main(){

    int matrizP[7][3];
    int matrizS[7][3];
    int vetorORD[21];
    int c=0;
    int escolha;

    for(int i=0;i<7;i++){
        for(int j=0;j<3;j++){
        c = c+1;
        matrizP[i][j]= c;
    }
    }

    for(int i=0;i<7;i++){
        printf("\n");
        for(int j=0;j<3;j++){
        printf("%i \t",matrizP[i][j]);
    }
    }

int cont = 0;
while(cont<3){

printf("\n"); 
printf("\n"); 

printf(" Escolha a coluna: ");
    scanf("%i",&escolha);

    // ORDENA AS COLUNAS DA MATRIZ SECUNDÁRIA COM DADOS DA PRIMÁRIA.

    if(escolha==0){

        for(int i=0;i<7;i++){
            for(int j=0;j<2;j++){
            matrizS[i][0]=matrizP[i][1];
            matrizS[i][1]=matrizP[i][0];
            matrizS[i][2]=matrizP[i][2];
            }
        }
    }

    if(escolha==1){

        for(int i=0;i<7;i++){
            for(int j=0;j<3;j++){
            matrizS[i][j]=matrizP[i][j];       
            }
        }
    }

    if(escolha==2){

        for(int i=0;i<7;i++){
            for(int j=0;j<3;j++){
            matrizS[i][2]=matrizP[i][1];
            matrizS[i][1]=matrizP[i][2];
            matrizS[i][0]=matrizP[i][0];
            }
        } 
    }

    // CRIA VETOR COM A SEQUÊNCIA DAS COLUNAS ORDENADAS.
    int d=0;
        for(int i=0;i<3;i++){
            for(int j=0;j<7;j++){
            vetorORD[d]=matrizS[j][i];
            d= d+1;
            }
        }

    // ALOCA O VETOR COM A SEQUÊNCIA ORDENADA NA MATRIZ PRIMÁRIA.
    d=0;
    for(int i=0;i<7;i++){
        for(int j=0;j<3;j++){ 
            matrizP[i][j]= vetorORD[d];
            d=d+1;
    }
    }

    // MOSTRA A MATRIZ PRIMÁRIA NA TELA ATÉ O 2º LOOPING, NO 3º MOSTRA A CARTA.
    if(cont<=1){
        for(int i=0;i<7;i++){
            printf("\n");
            for(int j=0;j<3;j++){
                printf("%i \t",matrizP[i][j]);
            }
        }
    }else{
        printf("\n Sua carta é a %i !\n\n",matrizP[3][1]);    
    }

cont++;

}

}