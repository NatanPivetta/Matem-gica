#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<time.h>

int
main ()
{
    
    // utilizar matrizes de 7 linhas e 3 colunas
    // armazenar matriz em vetores para reorganizar as colunas
    // 

  int num, i, j, k, r, g, card, temp, x, test, cont;
  card = 1;
  int deck[21], g_um[8], g_dois[8], g_tres[8], vet[8], mat[7][3],
    temp_mat[7][1], temp_g[3][7];

  x = 0;
  j = 0;
  i = 0;


  /* char *suit_c[4] = { "b ", "b#", "b&", "b%" };  // espadas, paus, ouro, copas  
     char *p[13] =
     { "A", "2", "3", "4", "5", "6", "7", "8", "9", "D", "J", "Q", "K" };
     char *deck[52];
   */

  while (j < 21)
    {
      temp = card;
      deck[i] = temp;
      card++;
      j++;
      i++;

    }

  void shuffle ();
  {
    // srand (time (NULL));

    for (i = 0; i < 20; i++)
      {
	r = rand () % 21;
	temp = deck[i];
	deck[i] = deck[r];
	deck[r] = temp;
      }


    // endereçando cartas para os vetores
  }
  j = 0;
  while (x < 7)
    {
      mat[0][j] = deck[x];
      
      x++;
      j++;
    }
  
  j = 0;
  while (x < 14)
    {
      mat[1][j] = deck[x];
      
      x++;
      j++;

    }

  
  j = 0;
  while (x < 21)
    {
      mat[2][j] = deck[x];
      
      x++;
      j++;
    }
  
  
  for (j = 0; j < 7; j++)
          {
    	    for (i = 0; i < 3; i++)
    	    {
    	      printf ("%d\t", mat[i][j]);
    	    }
    	 printf ("\n");
          }

  cont = 0;
  while(cont<3){
      

      void reorder ();
      {
    
        // grupo 0 escolhido. temp recebe grupo 1, grupo 1 recebe grupo 0, grupo 0 recebe temp;
        puts ("Em qual grupo está o número escolhido?");
        scanf ("%d", &g);
    
      
        // trocando os grupos de posição
       i = 0;
       while (i<7){
       
        
        if (g == 0)
          {
    
    	
    	temp_mat[0][i] = mat[1][i];
    	mat[1][i] = mat[0][i];
    	mat[0][i] = temp_mat[0][i];
          }
          i++;
       }
       
       i = 0;
       while (i<7){
           
        if (g == 2)
          {
    
    	
    	temp_mat[0][i] = mat[1][i];
    	mat[1][i] = mat[2][i];
    	mat[2][i] = temp_mat[0][i];
          }
          i++;
       }
       
       i = 0;
       while (i<7){
           
        if (g == 1)
          {
    
    	
    	temp_mat[0][i] = mat[1][i];
    	mat[1][i] = mat[1][i];
    	mat[1][i] = temp_mat[0][i];
          }
          i++;
       }   
    
    
        // dar cartas novamente
        
        // aqui consegui por os valores de uma matriz num grupo reordenado com 21 elementos.
        j=0;
        k=0;
        while (k<20) {
            for(j=0;j<7;j++){
                for(i=0;i<3;i++){
                deck[k] = mat[i][j];
                k++;
                }
            }
        }
        
        
        printf("\n");
    
    
        
        
        // enviar 7 primeiros elementos de cada grupo para primeiro indice da matriz
        
        while (k < 21){
            
            for(j=0;j<2;j++){
                for(i=0;i<7;i++){
                    mat[i][j] = deck[k];
                }
            }
            
            
        }
        
        
        printf("\n");
        for(k=0;k<7;k++){
            
            printf("%d\n", mat[0][k]);
        }
      
    
        }
        cont++;
        
    }   
        //reordenando as cartas para última disposição
        
        
        
    printf("\n");    
        
    // printf("%d", deck[10]);
        
  
    
}




