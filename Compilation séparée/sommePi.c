#include "sommePi.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


double sommePi(int n) {
    int i =0;
    double terme =1;
    double somme = 1;
    
    //pour améliorer la précision on note h 
    double h = pow(2,-20);
    
    //boucle while pour calculer la somme 
    while (i<n)  {
      i =i+1;
      terme = pow(-1,i)/(2*i+1);
      
      //break pour avoir une bonne estimation et dont les autres valeurs se considèrent inimportante
      if (fabs(terme) <= h) {
          break;
      
       }
      
      somme = somme + terme;
    }
    return (4*somme);
}
