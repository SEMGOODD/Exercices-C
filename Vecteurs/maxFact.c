#include <stdio.h>
int maxFact( int k) {
   int n=1, m=1;
   if (k < 0) {
      return -1;//gérer les entrées négatives
      }
        

   while (n*(m+1) <= k) {  
      m++;
      n *=m;
      	}
      return m;
}

int main() {
    int k ;
    
    // demande de saisir un entier
    printf("veuillez saisir un entier k: ");
    scanf("%d", &k);
    
    //appel à la fonction pour afficher le triangle
    int n = maxFact(k);
    
    printf("le plus grand n tel tel que n! <= %d est n = %d\n", k,n); 
    return (0);
    }
    
