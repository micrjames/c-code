#include <ncurses.h>

int main() {
   int ch;

   initscr();
   raw();
   keypad(stdscr, TRUE);
   noecho();

   ch = 'W';
   printw("The key is ");
   attron(A_BOLD);
   printw("%c.", ch);
   attroff(A_BOLD);

   refresh();
   getch();
   endwin();

   return 0;
}
