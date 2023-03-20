#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

int main() {
   char *message = NULL;
   unsigned long read = ask("What is your name?", &message);

   if(read != -1) {
	  char *msg = upper(message);
	  say("Hello", msg);
   }
   else say("", "message not read ... \n");


   free(message);

   return 0;
}
