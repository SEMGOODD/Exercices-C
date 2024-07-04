#include "Newtonracine2.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("veuillez saisir l'entier n : ");
    scanf("%d ", &n);
    double valeur_racine2 = Newtonracine2( n );
    
    printf("%f\n", valeur_racine2);
    
    return 0;
}

