#include <stdio.h>
int main() {
    int nb1 ;
    int nb2 ;
    
    // demande à l'utilisateur de saisir deux entiers
    printf("Veuillez saisir le premier entier : ");
    scanf("%d",&nb1);
    printf("Veuillez saisir le deuxième entier : ");
    scanf("%d",&nb2);
    
    
    //affiche le nombre saisie
    printf("\nVous avez saisi les nombres  %d et %d\n", nb1, nb2);
    
    return (0);
    }
//lorsque le programme ne fonctionne pas il s'affiche pendant l'exécution une erreur avec un message de pourquoi
