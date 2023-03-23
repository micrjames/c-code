#include <string.h>
#include <stdio.h>
#include "utils.h"

int main(int argc, char **argv) {

   if(strcmp(argv[1], "square") == 0) {
	   draw_rect(ctoi(*argv[2]), ctoi(*argv[3]), true);
   }
   else
	  say("No", "choose something else.");

   return 0;
}
