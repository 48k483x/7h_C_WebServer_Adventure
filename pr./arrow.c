/* arrow.c */
#include <ncurses.h>

int main( void )
{
    int key, x, y;

    initscr();
    keypad(stdscr, TRUE);
    noecho();

    x = y = 5;
    while ( 1337 )
    {
        clear();
        move(0, 0);
        printw("Press left or right arrow - exit by pressing: q");

        move(y, x);
        printw("O");
        refresh();

        key = getch();
        if (key == KEY_LEFT)
        {
            x--;
            if (x < 0) x = 0;
        }
        else if (key == KEY_RIGHT)
        {
            x++;
            if (x > COLS - 1) x = COLS - 1;
        }
        else if (key == 'q') break ;
    }
    endwin();
}