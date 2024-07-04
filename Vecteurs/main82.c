#include "Vigenere.h"
#include <string.h>
#include <ctype.h>

int main() {
    char texte[100] = "HELLO WORLD" ;
    char textecrypte[100];
    
    void codeVigenere(texte, fintz, textecrypte);
    printf("le code crypté est %s \n", textecrypte);
    
    return 0;
}
