#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
  int boucleContinuer = 0;
  int continuer = 0;
  int nombreDeCoup = 1;
  int nombreEntre = 0;
  srand(time(NULL)); //on initialise pour générer l'entier aléatoire
  const int  MIN = 1;
  int nombreMax = 100;
  int difficulte = 1;

  do { // boucle du jeu dont l'utilisateur choisi ou non sa réitération
  printf("Choisissez un mode de difficulte : \n 1. maximum = 100 \n 2. maximum = 1000 \n 3. maximum = 10000 \n ");
  scanf("%d", &difficulte);
  switch(difficulte) 
  {
  case 1:
    nombreMax = 100;
    break;
  case 2:
    nombreMax = 1000;
    break;
  case 3:
      nombreMax = 10000;
      break;
  default:
    printf("Entrez un entier compris entre 1 et 3 s'il vous plait. \n");
    break;
  }




      int nombreMystere = (rand() % (nombreMax - MIN +1)) + MIN; //génère un entier aléatoirement.



    do // 
    {


    printf("Entrez un nombre : ");

    scanf("%d", &nombreEntre);


     if(nombreEntre > nombreMystere)
     {
         printf("Trop grand \n");
         printf("nombre de coup : %d \n", nombreDeCoup);
         nombreDeCoup++;

     }
     else if (nombreEntre < nombreMystere)
     {
         printf("Trop petit \n");
         printf("nombre de coup : %d \n", nombreDeCoup);
         nombreDeCoup++;


     }

     else
     {
        printf("Bien joue \n ");
        printf("Vous avez gagne en %d coup(s) \n", nombreDeCoup);
     }



    }while(nombreEntre != nombreMystere);

    printf("Voulez vous continuer ? (y = 0/n = 1) \n");
    scanf("%d", &continuer);
    switch(continuer)
    {
    case 0:
        printf("Vous avez choisi de continuer\n");
        break;
    case 1:
        printf("Vous avez choisi de quitter, au revoir\n");
        boucleContinuer = 1;
        break;
    default:
        printf("S'il vous plait entrez 0 ou 1\n");
    }



  }while(boucleContinuer == 0);

    return 0;



}
