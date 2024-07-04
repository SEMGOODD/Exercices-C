#include <stdio.h>
void affichageSapin(int n) {
    int i, j;
    
    //boucle extérieure pour gérer chaque ligne
    for (i = 0; i <= n-1; i++) {
        
        //boucle intérieure pour gérer le nombre d'espace pour construire la pente du triangle
        for ( j = 0; j < n-1-i; j++) {
            printf(" ");
            }
        
        //boucle intérieure pour gérer le nombre d'étoiles sur chaque ligne
        for ( j = 0; j < 2*i+1; j++) {
            printf("*");
            }
        //passer à la ligne suivante
        printf("\n");
    
    } 
    
    // boucle extérieure pour gérer les lignes
    for (i = 0; i < 3; i++) {
       
       //boucle intérieure pour gérer le nombre d'espace sur chaque ligne
       for (j = 0; j < n-2; j++) {
          printf(" ");
       }
       printf("@@@\n");
       
       }
  
}
int main() {
    int a ;
    
    // demande de saisir la hauteur du triangle
    printf("veuillez saisir le nombre de lignes: ");
    scanf("%d", &a);
    
    //appel à la fonction pour afficher le triangle
    affichageSapin(a);
    
    return (0);
    }
