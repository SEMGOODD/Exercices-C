#include "produitPi.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double produitPi(int n) {
    if (n <= 0) {
        return 0;
    }
    
    //on commence à partir de 1 car la formule utilise 2i et 2i - 1.
    int i = 1; 
    double produit = 1;
   
    // boucle while qui vérifie la condition suivante et qui permet de générer le code jusqu'au n-ème terme
    while (i <= n) {
        double terme = (4.0 * i * i) / ((4.0 * i * i) - 1.0);
        produit *= terme;
        i++;
    }
   
   // car elle calcule Pi/2.
    return 2.0 * produit; 
}
