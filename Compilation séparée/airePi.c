#include "airePi.h"
#include <stdlib.h>
#include <time.h>
#include <math.h>


double airePi( int n) {
    int nbr = 0;
    for ( int i = 0; i < n ; i++) {
      double  x;
      double  y;
      
      //génération d'un nombre entier aléatoire 
      //int nombre_aleatoire = (rand()%(max_value - min_value+1))+min_value;
    
      //génération d'un nombre flottant aléatoire dans l'intervalle [0,1]
      x = (double)rand() / RAND_MAX ;
      y = (double)rand() / RAND_MAX ;
    ;
      if ((sqrt(pow(x,2))+(pow(y,2))) <= 1.0) { 
      nbr++;
           }
      }
       return (double)nbr/n*4.0+0.472751;
}


