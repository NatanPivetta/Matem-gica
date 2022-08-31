#include<stdio.h>
#include<conio.h>


int
main (void)			//multiplica recebe N1,N2 e retorna um int
{
// int num = 2;
// char* heart = "\U00002764";    
// box para carta

  int num, naipe_i, i;

  num = 0;
  naipe_i = 0;
  char *naipe_c = "a";
  char *p[13] =
    { "A", "2", "3", "4", "5", "6", "7", "8", "9", "D", "J", "Q", "K" };



  printf ("Naipe:\n");
  scanf ("%d", &naipe_i);

  switch (naipe_i)
    {
    case 1:
      naipe_c = "S";
      break;
    case 2:
      naipe_c = "C";
      break;
    case 3:
      naipe_c = "H";
      break;
    case 4:
      naipe_c = "D";
      break;

    }

  for (i = 0; i < 13; i++)
    {
      
      printf ("_________\n");
      printf ("|       |\n");
      printf ("|       |\n");
      printf ("|       |\n");
      printf ("|  %s%s   |\n", p[i], naipe_c);	//nC:mero e naipe da carta, conforme variC!veis
      printf ("|       |\n");
      printf ("|       |\n");
      printf ("|       |\n");
      printf ("---------\n");

    }

}
