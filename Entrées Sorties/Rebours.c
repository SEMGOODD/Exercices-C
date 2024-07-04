#include <stdio.h>
int main() {
    int i, n ;
    
    //demande à l'utilisateur de saisir un entier
    printf("Saisissez un nombre entier naturel: ") ;
    scanf("%d", &n) ;
    
    for (i = n; i >= 0; i--) {
    printf("%d\n", i);
    }
    return (0);
    }
