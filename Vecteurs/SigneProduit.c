#include <stdio.h>
int main() {
    float a, b ;
    
    // demande à l'utilisateur de saisir les deux nombres
    printf("Veuillez saisir les deux nombres: ");
    scanf("%f", &a);
    scanf("%f", &b);
    
    if (a == 0 || b == 0) {
    	printf("le produit est nul.\n");
    } else {
    	
    	if (( a > 0 && b > 0) || ( a < 0 && b < 0 )) {
    		printf("Le produit est positif.\n");
    	} else {
    		printf("Le produit est négatif.\n");
    	}
    }
    
    return (0);
}
    
