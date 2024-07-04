#include "Cesar.h"
#include <string.h>
#include <ctype.h>

void codeCesar( const char* message, short Key, char * messagecrypte) {
     int i = 0;
     short rang;
     while (message[i] != '\0') {
          if ((message[i] >= 'a') && (message[i] <= 'z')) {
          	rang = (message[i] - 'a' + Key) % 26 ;
          	if (rang < 0) rang += 26 ;
          	messagecrypte[i] = 'a' + rang ;
	  }
	  else if ((message[i] >= 'A') && (message[i] <= 'Z')) {
          	rang = (message[i] - 'A' + Key) % 26 ;
          	if (rang < 0) rang += 26 ;
          	messagecrypte[i] = 'A' + rang ;
	  }
	  else {
          	messagecrypte[i] = message[i];
          }
          i++ ;
     }
     messagecrypte[i] = '\0';
}

