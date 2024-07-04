#include <stdio.h>
int main() {
    char prenom[29] ;
    char nom[29] ;
    int jour, mois, année;
    
    // demande à l'utilisateur de saisir son nom
    printf("Veuillez saisir votre nom : "); 
    scanf("%s", nom);
    
    // demande à l'utilisateur de saisir son prenom
    printf("Veuillez saisir votre prenom : "); 
    scanf("%s", prenom);
    
    // demande à l'utilisateur de saisir sa date de naissance
    printf("Veuillez saisir la date de naissance (jj/mm/aaaa) : "); 
    scanf("%d %d %d", &jour, &mois, &année);
    
    //affichage du nom et prenom saisies
    printf("Nom, Prenom:  %s, %s\n", nom, prenom); 
    
    //Affichage de la date de naissance
    printf("Date de naissance :%02d/%02d/%04d \n", jour, mois ,année); 
    
    return (0);
    }
   
