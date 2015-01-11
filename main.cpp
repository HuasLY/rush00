/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hly <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 15:22:26 by hly               #+#    #+#             */
/*   Updated: 2015/01/11 22:58:27 by hly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ncurses.h>
#include <stdlib.h>
#include <unistd.h>
#include "Entity.class.hpp"
#include "Enemy.class.hpp"
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

Entity *	collision(Entity & entity, t_data_entities &data) {
	t_entities	*tmp;

	tmp = data.first;
	while (tmp) {
		if (tmp->entity != &entity && tmp->entity->getX() == entity.getX()
			&& tmp->entity->getY() == entity.getY())
		{
			*tmp->entity -= entity.getDmg();
			entity -= tmp->entity->getDmg();
			return tmp->entity;
		}
		tmp = tmp->next;
	}
	return NULL;
}

void	movePlayer(Player &player, t_data_entities &data, int cmd, int maxX, int maxY) {
	if (cmd == KEY_UP && player.getY() > 0)
		player.Move(UP, data);
	else if (cmd == KEY_DOWN && player.getY() < maxY)
		player.Move(DOWN, data);
	else if (cmd == KEY_LEFT && player.getX() > 0)
		player.Move(LEFT, data);
	else if (cmd == KEY_RIGHT && player.getX() < maxX)
		player.Move(RIGHT, data);
	mvaddch(player.getY(), player.getX(), player.getSkin());
	return;
}

void	displayEntities(t_data_entities &data) {
	t_entities	*tmp;

	tmp = data.first;
	while (tmp) {
		mvaddch(tmp->entity->getY(), tmp->entity->getX(), tmp->entity->getSkin());
		tmp->entity->Move("", data);
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
	bool				gameOver = false;

	ft_init_data_entities(&data);
	srand(time(NULL));
	initscr();
	noecho();
	curs_set(FALSE);
	refresh();
	win = newwin(LINES, COLUMNS, 0, 0);
	nodelay(stdscr, TRUE);
	keypad(stdscr, TRUE);
	getmaxyx(win, maxY, maxX);
	mvaddch(player.getY(), player.getX(), player.getSkin());
	refresh();
	while(cmd != 27 && !gameOver) {
		cmd = getch();
		clear();
		if (cmd == ' ') {
			ft_add_entity(&data, player.attack(player.getX(), player.getY()));
		}
		ft_add_entity(&data, Random(maxX, maxY));
		displayEntities(data);
		if (collision(player, data))
			gameOver = true;
		else {
			movePlayer(player, data, cmd, maxX, maxY);
			if (collision(player, data))
				gameOver = true;
		}
		refresh();
		usleep(DELAY);
	}
	endwin();
}
