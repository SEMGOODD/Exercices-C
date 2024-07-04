#include "codeScytale.h"
#include <stdio.h>
#include <string.h>
#include <math.h>

void crypterScytale(const char* message, char* messageCrypte) {
    int longueurMessage = strlen(message);

    int dimension = (int)ceil(sqrt(longueurMessage));//dimension de la grille

    int espacesSupplementaires = dimension * dimension - longueurMessage;//nombre d'espaces nécessaires pour compléter la grille

    char grille[dimension][dimension];
    int k = 0; //représente l'index du message

    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j < dimension; j++) {
            if (k < longueurMessage) {
                grille[i][j] = message[k++];
            } else {
                grille[i][j] = ' ';
            }
        }
    }

    int m =0; //représente l'index crypté

    for (int j = 0; j < dimension; j++) {
        for (int i = 0; i < dimension; i++) {
            messageCrypte[m++] = grille[i][j];
        }
    }

    // on ajoute des espaces supplémentaires à la fin du message crypté
    for (int l = 0; l < espacesSupplementaires; l++) {
        messageCrypte[indexCrypte++] = ' ';
    }

    messageCrypte[indexCrypte] = '\0'; //pour marquer la fin de la chaîne de caractère
}


