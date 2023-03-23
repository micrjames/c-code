#include <string.h>
#include <stdio.h>
#include "utils.h"

int main(int argc, char **argv) {

   if(strcmp(argv[1], "square") == 0) {
	   draw_sq(ctoi(*argv[2]), true);
	   draw_sq(ctoi(*argv[2]), false);
   }
   else if(strcmp(argv[1], "rectangle") == 0) {
	   draw_rect(ctoi(*argv[2]), ctoi(*argv[3]), true);
	   draw_rect(ctoi(*argv[2]), ctoi(*argv[3]), false);
   }
   else if(strcmp(argv[1], "isos") == 0) {
	   draw_isos(ctoi(*argv[2]), true);
	   draw_isos(ctoi(*argv[2]), false);
   }
   else
	  say("No", "choose something else.");

   return 0;
}
