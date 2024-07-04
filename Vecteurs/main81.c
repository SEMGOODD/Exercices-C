#include "Cesar.h"
#include <string.h>
#include <ctype.h>

int main() {
    char mess[100] = "Veni, vidi, vici" ;
    char messCryp[100];
    
    void codeCesar( mess, 3, messcryp);
    printf("le code crypté est %s \n", messCryp);
    
    return 0;
}
