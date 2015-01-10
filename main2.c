/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hly <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 15:22:26 by hly               #+#    #+#             */
/*   Updated: 2015/01/10 19:33:12 by oberrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ncurses.h>
#include <unistd.h>

#define DELAY 30000

int main(void) {
	int x = 0, y = 0, maxX = 0, maxY = 0, cmd = 0;

	initscr();
	noecho();
	curs_set(FALSE);
	keypad(stdscr, TRUE);
	getmaxyx(stdscr, maxY, maxX);
	mvprintw(y, x, "o"); // Print our "ball" at the current xy position
	refresh();
	while(cmd != 27) {
		cmd = getch();
		if (cmd && cmd != 27) {
			if (cmd == KEY_UP && y > 0)
				y--;
			else if (cmd == KEY_DOWN && y < maxY)
				y++;
			if (cmd == KEY_LEFT && x > 0)
				x--;
			else if (cmd == KEY_RIGHT && x < maxX)
				x++;
			clear();             // Clear the screen of all previously-printed characters
			mvprintw(y, x, "o"); // Print our "ball" at the current xy position
			refresh();
			usleep(DELAY);       // Shorter delay between movements
		}
	}
	endwin();
}
