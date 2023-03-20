#include <stdio.h>
#include <stdlib.h>

void say(char *message) {
   printf("%s", message);
}

unsigned long ask(char **message) {
   unsigned long len;                                                     
   printf("%s", "What would you like to say? ");

   unsigned long read = getline(message, &len, stdin);

   return read;
}
