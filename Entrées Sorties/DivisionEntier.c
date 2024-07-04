#include <stdio.h>
int main() {
    int n, d ;
    
    // demande à l'utilisateur de saisir le numérateur et le dénominateur
    printf("Veuillez saisir le numérateur et le dénominateur: ") ;
    scanf("%d", &n);
    scanf("%d", &d);
    
    if (d != 0) {
         printf("%d / %d = %f \n", n, d, (float)n/d);
    } else {
         printf("Division impossible\n");
    }
    return (0);
}

//Pour les deux derniers exemples, ils ne s'affiche pas car il s'agit d'un nombre décimal (réél aussi)
