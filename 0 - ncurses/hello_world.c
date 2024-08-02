#include <ncurses.h>

int main() {	
	initscr();	  				/* Start curses mode 		       */
	printw("Hello World !!!");	/* Print Hello World		       */
								/* on a window called stdscr	   */
								/* at the current (y, x) co-ords   */
								/* Here, we're at (0, 0)           */
	/* updates a few flags and data structures and writes the data
	 * to a buffer corresponding to stdscr
	 */
	refresh();			        /* Print it on to the real screen  */
	getch();			        /* Wait for user input             */
	endwin();			        /* End curses mode		           */

	return 0;
}
