#include "produitPi.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("veuillez saisir l'entier n : ");
    scanf("%d ", &n);
    double valeurPi = produitPi( n );
    
    printf("%f\n", valeurPi);
    
    return 0;
}

