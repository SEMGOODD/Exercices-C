#include <stdlib.h>      
#include <stdio.h>

void binaire(int n) {
    int tab[10], i;
    for (i = 0; n > 0;i++) {
       tab[i] = n%2;
       n   = n/2;
    }
    printf("le nombre binaire saisi: ");

    for (i= i-1;i>=0;i--) {
      printf("%d",tab[i]);
    }
    printf("\n");
}
int main() {
    int a ;
    
    // demande de saisir un entier
    printf("veuillez saisir un entier à afficher en mode bianire: ");
    scanf("%d", &a);
    
    //appel à la fonction pour convertir l'entier en mode binaire
    binaire(a);
    
    return (0);
    }
