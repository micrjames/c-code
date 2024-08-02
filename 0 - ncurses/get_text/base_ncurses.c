#define TRUE 1
#include <ncurses.h>

void open() {
   initscr();
   raw();
   keypad(stdscr, TRUE);
   noecho();
}

void close() {
   refresh();
   getch();
   endwin();
}
