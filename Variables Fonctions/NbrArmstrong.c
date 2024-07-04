#include <stdio.h>
#include <math.h>
#include <string.h>

int estArmstrong(int n) {
    char text[20];
    int t, tmp, somme;
    sprintf(text, "%d", n);
    somme = 0;
    tmp = n;
    while (n > 0) {
        t = n % 10;
        somme = somme + (int)pow(t, strlen(text));
        n = n / 10;
    }
    if (tmp == somme)
        return 1; // Renvoie 1 si c'est un nombre d'Armstrong
    else
        return 0; // Renvoie 0 si ce n'est pas un nombre d'Armstrong
}

int main() {
    int a;

    // demande de saisir le nombre pour s'assurer s'il s'agit d'un nombre d'Armstrong ou non
    printf("Veuillez saisir le nombre voulu: ");
    scanf("%d", &a);

    // appel à la fonction d'Armstrong
    if (estArmstrong(a)) {
        printf("%d est un nombre d'Armstrong\n", a);
    } else {
        printf("%d n'est pas un nombre d'Armstrong\n", a);
    }

    return 0;
} //lors de la compilation veuillez écrire gcc NbrArmstrong.c -o NbrArmstrong -lm (qui a pour but de lier le programme à la bibiliothèque mathématique)
