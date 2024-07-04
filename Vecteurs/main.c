#include "airePi.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    srand(time(NULL));
    int n;
    printf("veuillez saisir l'entier n : ");
    scanf("%d ", &n);
    double valeurPi = airePi( n );
    
    printf("%f\n", valeurPi);
    
    return 0;
    }
    
    
    
