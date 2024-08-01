#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

int main() {
   char *message = NULL;
   unsigned long read = ask("What is your name?", &message);

   if(read != -1) {
	  str_trim(&message);
	  title(&message);
	  str_cat(&message, "!");
	  say("Hello", message);
   }
   else say("", "message not read ... \n");

   free(message);

   return 0;
}
