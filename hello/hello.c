#include <stdio.h>
#include <stdlib.h>
#include "hello.h"

int main() {
   char *message = NULL;

   char *msg = ask(message);
   say(msg);

   free(message);

   return 0;
}
