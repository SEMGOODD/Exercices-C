#include "codeScytale.h"
#include <string.h>
#include <ctype.h>
#include <math.h>

int main() {
    const char* message = "RENDEZ VOUS DEMAIN SOIR A LA TIREUSE";
    char messageCrypte[100];  

    crypterScytale(message, messageCrypte);

    printf("Message original : %s\n", message);
    printf("Message crypté    : %s\n", messageCrypte);

    return 0;
}
