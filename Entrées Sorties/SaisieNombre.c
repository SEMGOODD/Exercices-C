#include <stdio.h>
int main() {
    int nb ; 
    
    // demande à l'utilisateur de saisir un nombre
    printf("Veuillez saisir un nombre : ");
    scanf("%d",&nb);
    
    //affiche le nombre saisie
    printf("\nVous avez saisi le nombre  %d\n", nb);
    return (0);
    }
//dans le cas ou je saisie une chaîne de caractères ou une lettre au lieu de d'un nombre entier il s'exécute 0; et dans le cas d'un réel il s'exécute la partie entière de ce nombre réel

