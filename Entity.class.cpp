/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Entity.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oberrada <oberrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 15:14:04 by oberrada          #+#    #+#             */
/*   Updated: 2015/01/11 21:23:05 by oberrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Entity.class.hpp"
#include "ft_retro.hpp"

Entity::Entity(void) : _x(0), _y(0), _hp(1), _dmg(1), _skin('o')
{
	return;
}

Entity::Entity(int x, int y, int hp, int dmg, char skin) : _x(x), _y(y), _hp(hp), _dmg(dmg), _skin(skin)
{
	return;
}

Entity::~Entity(void)
{
	std::cout <<"Destructor Called, Class: Entity" << std::endl;
	return;
}

Entity::Entity(Entity const & src)
{
	std::cout<<"Copy Constructor Called" <<std::endl;
	*this = src;
	return;
}

Entity & Entity::operator=(Entity const & rhs)
{
	std::cout << "Assignation Called, Class: Entity" <<std::endl;
	this->_x = rhs._x;
	this->_y = rhs._y;
	this->_hp = rhs._hp;
	this->_dmg = rhs._dmg;
	this->_skin = rhs._skin;
	return *this;
}

int		Entity::getX(void)
{
	return this->_x;
}

int		Entity::getY(void)
{
	return this->_y;
}

char	Entity::getSkin(void) const
{
	return this->_skin;
}

int		Entity::GetHP(void) const
{
	return this->_hp;
}

void	Entity::Move(std::string direction)
{
	if (direction == UP)
		this->_y = this->_y - 1;
	if (direction == DOWN)
		this->_y = this->_y + 1;
	if (direction == RIGHT)
		this->_x = this->_x + 1;
	if (direction == LEFT)
		this->_x = this->_x - 1;
	return;
}

void	Entity::Die(void)
{
	std::cout <<"Function Die Called"<<std::endl;
	delete this;
	return;
}
