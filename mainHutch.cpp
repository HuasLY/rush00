/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hly <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 15:22:26 by hly               #+#    #+#             */
/*   Updated: 2015/01/10 21:22:22 by hly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ncurses.h>
//#include <unistd.h>
#include "ft_retro.hpp"
#include "Entity.class.hpp"

#define DELAY 30000

int main(void) {
//	int x = 0, y = 0, maxX = 0, maxY = 0, cmd = 0;

	t_data_entities		data;
	Entity				entity;

	ft_init_data_entities(&data);
	for (int i = 0; i < 15; i++)
		ft_add_entity(&data, &entity);
	ft_print_entities(data);
/*	initscr();
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
	endwin();*/
}
