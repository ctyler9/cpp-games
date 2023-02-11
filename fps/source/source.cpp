#include <iostream>
using namespace std;

#include <curses.h>

int main()
{
    // Start curses mode
    initscr();
    keypad(stdscr, TRUE);
    savetty();
    cbreak();
    noecho();
    timeout(0);
    leaveok(stdscr, TRUE);
    curs_set(0);

    // if not support color
    if (!has_colors())
    {
        endwin();
        printf("Your terminal does not support color\n");
    }
}