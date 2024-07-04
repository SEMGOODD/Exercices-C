#include "Halleyracine2.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double Halleyracine2(int n) {
    
    //gestion d'erreur si n inférieur ou égal à 0
    if (n < 0) {
        return 0;
    }
    
    //initialisation de la première estimation
    double x = 1.0;
    
    //boucle pour l'estimation de racine 2
    for (int i = 0; i < n; i++) {
       x = x*((x*x)+6) / ((3*x*x)+2);
    }
    return x;   
}
