#include "sommePi.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("veuillez saisir l'entier n : ");
    scanf("%d ", &n);
    double valeurPi = sommePi( n );
    
    printf("%f\n", valeurPi);
    
    return 0;
}

