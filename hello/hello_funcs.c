#include <stdio.h>
#include <stdlib.h>

void say(char *message) {
   printf("%s", message);
}

char *ask(char *message) {
   printf("%s", "What would you like to say?");

   unsigned long len;                                                       
   getline(&message, &len, stdin);

   return message;
}
