#include "Newtonracine2.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double Newtonracine2(int n) {
    
    //gestion d'erreur si n inférieur ou égal à 0
    if (n < 0) {
        return 0;
    }
    
    //initialisation de la première estimation
    double u = 1;
    
    //boucle pour l'estimation de racine 2
    for (int i = 0; i < n; i++) {
       u = (u/2) + (1/u);
    }
    return u;   
}
