#include <stdio.h>
#include <stdlib.h>
#include "hello.h"

int main() {
   char *message = NULL;

   unsigned long read = ask(&message);
   if(read != -1)
	  say(message);
   else say("message not read ... \n");

   free(message);

   return 0;
}
