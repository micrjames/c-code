#include <ncurses.h>
#include "base_ncurses/base_ncurses.h"

int main() {
   int ch;

   open(TRUE);

   printw("Type any character to see it in bold.\n");
   ch = getch();
   if(ch == KEY_F(1)) {
	  printw("F1 Key pressed.");
   } else {
	  printw("The key is ");
	  attron(A_BOLD);
	  printw("%c.", ch);
	  attroff(A_BOLD);
   }

   close();

   return 0;
}
