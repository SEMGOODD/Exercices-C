#include <stdio.h>
void tableMultiplication(int n) {
    int i ;
    
    //bouvle for construire la table de multiplication
    for ( i = 1; i <= 10; i++) {
        printf("%d * %d = %d \n", i , n, i*n);
    }
}

int main() {
    int n ;
    
    // demande de saisir le nombre à multiplier
    printf("veuillez saisir le nombre à multiplier: ");
    scanf("%d", &n);
    
    //appel à la fonction pour afficher la table de multiplication du nombre saisi
    tableMultiplication(n);
    
    return (0);
    }

