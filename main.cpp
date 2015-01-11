/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hly <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 15:22:26 by hly               #+#    #+#             */
/*   Updated: 2015/01/11 23:06:50 by oberrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ncurses.h>
#include <stdlib.h>
#include <unistd.h>
#include "Entity.class.hpp"
#include "Enemy.class.hpp"
#include "Etoile.class.hpp"
#include "Player.class.hpp"
#include "Projectile.class.hpp"
#include "ft_retro.hpp"

#define DELAY 30000

Enemy	*Random(int maxX, int maxY) {
	int		X;
	int		Y;
	int		HP;

	if (rand() % SPAWN_RATE == 1)
	{
		X = maxX;
		Y = (rand() % maxY) + 1;
		HP = (rand() % 2) + 1;
		return new Enemy(X, Y, HP, ENEMY_SKIN);
	}
	return NULL;
}


Etoile	*RanPutEtoile(int maxX, int maxY) {
	int		X;
	int		Y;
	int		HP;

	if (rand() % SPAWN_RATE == 1)
	{
		X = maxX;
		Y = (rand() % maxY) + 1;
		HP = (rand() % 2) + 1;
		return new Etoile(X, Y, HP, 0,ETOILE_SKIN);
	}
	return NULL;
}

Entity &	collision(Entity & entity, std::string direction, t_data_entities data) {
	t_entities	*tmp;

/*	while (tmp) {
		switch (direction) {
			case UP:
				if (tmp->getX() == entity.getValueX() && tmp->getY() == entity.getY())

				break;
		}
		tmp = tmp->next;
	}*/
}

void	movePlayer(Player &player, int cmd, int maxX, int maxY) {
	if (cmd == KEY_UP && player.getY() > 0)
		player.Move(UP);
	else if (cmd == KEY_DOWN && player.getY() < maxY)
		player.Move(DOWN);
	else if (cmd == KEY_LEFT && player.getX() > 0)
		player.Move(LEFT);
	else if (cmd == KEY_RIGHT && player.getX() < maxX)
		player.Move(RIGHT);
	mvaddch(player.getY(), player.getX(), player.getSkin());
	return;
}

void	displayEntities(t_data_entities data) {
	t_entities	*tmp;

	tmp = data.first;
	while (tmp) {
		mvaddch(tmp->entity->getY(), tmp->entity->getX(), tmp->entity->getSkin());
		tmp->entity->Move("");
		tmp = tmp->next;
	}
	return;
}

int main(void) {
	t_data_entities		data;
	Player				player(10, 10, 1, 1, '>');
	WINDOW				*win;
	int 				maxX = 0;
	int					maxY = 0;
   	int					cmd = 0;

	ft_init_data_entities(&data);

	srand(time(NULL));
	initscr();
	noecho();
	curs_set(FALSE);
	refresh();
	win = newwin(LINES, COLUMNS, maxX, maxY);
	nodelay(stdscr, TRUE);
	keypad(stdscr, TRUE);
	getmaxyx(win, maxY, maxX);
	mvaddch(player.getY(), player.getX(), player.getSkin());
	refresh();
	while(cmd != 27) {
		cmd = getch();
		clear();
		if (cmd == ' ') {
		//	ft_add_entity(&data, player.attack(player.getX(), player.getY()));
		}
	ft_add_entity(&data, Random(maxX, maxY));
	ft_add_entity(&data, RanPutEtoile(maxX, maxY));
	displayEntities(data);
	Etoile::scrolling();
	movePlayer(player, cmd, maxX, maxY);


	//box(win, 0, 0);
///	wrefresh(win);
//	system("");
		refresh();
		usleep(DELAY);
	}
	endwin();
}
