#include <string.h>
#include <stdio.h>
#include "utils.h"

int main(int argc, char **argv) {

   if(strcmp(argv[1], "square") == 0) {
	   draw_sq(ctoi(*argv[2]), true);
	   draw_sq(ctoi(*argv[2]), false);
   }
   else
	  say("No", "choose something else.");

   return 0;
}
