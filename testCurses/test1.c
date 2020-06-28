#include <ncurses.h>

int main(int argc,char **argv){

	initscr();
	printw("hello ncurses~\n");
	refresh();
	int c=getch();
	printw("%d",c);
	getch();
	endwin();
	return 0;
}

