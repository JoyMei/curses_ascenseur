#include<curses.h>
/*or ncurses.h?*/
int main(int argc,char **argv){
    initscr(); 
	int x,y;
	x=y=10;
	move(y,x);
	printw("test(10,10)");
        box(stdscr, ACS_VLINE, ACS_HLINE); /*draw a box*/
        move(LINES/2, COLS/2); /*move the cursor to the center*/
        waddstr(stdscr, "Hello, curses ~ Oui, Success!");


	int c=getch();
	clear();
	move(0,0);
	printw("%d",c);
	refresh();

 
    getch();
 
    endwin();
 
    return 0;
 

}

