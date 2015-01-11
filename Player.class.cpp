/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oberrada <oberrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 15:50:50 by oberrada          #+#    #+#             */
/*   Updated: 2015/01/11 23:05:20 by hly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Player.class.hpp"
#include <string>
#include <iostream>

Player::Player(void)
{
	return;
}

Player::Player(int x, int y, int hp, int dmg, char skin) : Entity(x, y, hp, dmg, skin)
{
	return;
}

Player::~Player(void)
{
	return;
}

Player::Player(Player const & src) : Entity(src)
{
	std::cout<<"Copy Constructor Called" <<std::endl;
	*this = src;
	return;
}

Player & Player::operator=(Player const & rhs)
{
	std::cout << "Assignation Called, Class: Player" <<std::endl;
	this->_x = rhs._x;
	this->_y = rhs._y;
	this->_hp = rhs._hp;
	this->_dmg = rhs._dmg;
	return *this;
}

Projectile  *Player::attack(int x, int y, int hp)
{
	return new Projectile(x + 1, y, hp, 1, '-');
}

bool	Player::isAlive(void) const
{
	return (this->_hp > 0);
}
