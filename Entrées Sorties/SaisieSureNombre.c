#include <stdio.h>
#include <stdlib.h>
int SaisieEntier()  { 
    int n ;
    printf("\n Saisissez un entier: ");
    scanf("%d ", &n);
    return(n);
}
int main() {
    int nb;
    nb = SaisieEntier();
    printf("le nombre saisie est %d:", nb);
    return (0);
}
