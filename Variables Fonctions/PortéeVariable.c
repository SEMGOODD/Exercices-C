#include <stdio.h>
int Bidon()  { 
    int n ;
    printf("\n Saisissez un entier: %d\n");
    scanf("%d ", &n);
    return(n);
}
int main() {
    int nb ;
    printf("\n Veuillez saisir un nombre: %d", nb);
    scanf("%d", &nb);
    printf("Le nombre saisi est : %d", nb) ;
    Bidon();
    printf("%d\n", nb);
    return (0);
}
