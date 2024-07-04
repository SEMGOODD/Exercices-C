#include "Vigenere.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void codeVigenere( const char * texte, short * key, char * textecrypte) {
   int i;
   int size = strlen(key);

   for(i = 0; [i] != '\0'; i++){
        if( (texte[i] >= 'a') && (texte[i] <= 'z') ){
            int rang = (texte[i] + key[i % size] - 2 * 'a') % 26;
            textecrypte[i] = 'a' + rang;
        }
        else if( (texte[i] >= 'A') && (texte[i] <= 'Z') ){
            int rang = (texte[i] + key[i % size] - 'a' - 'A') % 26;
            textecrypte[i] = 'A' + rang;
        }
        else
            textecrypte[i] = texte[i];
    }
    textecrypte[i] = '\0';
}
