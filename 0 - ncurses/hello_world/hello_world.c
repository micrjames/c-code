#include <ncurses.h>
#include "base_ncurses/base_ncurses.h"

int main() {	
	open(FALSE);
	printw("Hello World !!!");	/* Print Hello World		       */
								/* on a window called stdscr	   */
								/* at the current (y, x) co-ords   */
								/* Here, we're at (0, 0)           */
	/* updates a few flags and data structures and writes the data
	 * to a buffer corresponding to stdscr
	 */
	close();

	return 0;
}
