#include <ncurses.h> //draw in console
#include <stdlib.h>
#include <unistd.h> // For usleep

int main() {
    initscr();
    noecho();
    keypad(stdscr, TRUE);
    curs_set(0);
    nodelay(stdscr, TRUE);

    // Game logic here (snake, food, walls, etc.)

    int ch;
    while (1) {
        clear();

        // Draw the game elements

        mvprintw(0, 0, "Snake Game!"); // Example text
        mvprintw(1, 1, "%d : %c", ch, ch);

        ch = getch();
        if (ch == KEY_EXIT || ch == 'q') {
            break;
        }
        // Update game state based on input

        usleep(1000000); // 1000ms delay
    }

    endwin();
    return 0;
}