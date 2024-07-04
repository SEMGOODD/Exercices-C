#include <stdio.h>
int main() {
    int heure, minutes;
    
    // demande à l'utilisateur de saisir l'heure
    printf("Veuillez saisir l'heure : "); 
    scanf("%d", &heure);
    
    // demande à l'utilisateur de saisir les minutes
    printf("Veuillez saisir les minutes : "); 
    scanf("%d", &minutes);
   
    
    //Affichage de l'heure et les minutes +1
    printf("Dans une minute il sera %02d heure(s) %02d \n", heure, minutes + 1); 
    
    return (0);
    }
   
