//Voici une autre méthode
#include <stdio.h>
int main() {
    int i, n ;
    
    //demande à l'utilisateur de saisir un entier
    printf("Saisissez un nombre entier naturel: ") ;
    scanf("%d", &n) ;
    
    for (i = 0; i <= n; i++) {
    printf("%d\n", n-i);
    }
    return (0);
    }
