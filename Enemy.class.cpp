/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oberrada <oberrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 16:34:08 by oberrada          #+#    #+#             */
/*   Updated: 2015/01/11 20:20:17 by hly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Enemy.class.hpp"
#include "ft_retro.hpp"

Enemy::Enemy(void)
{
	return;
}

Enemy::Enemy(int x, int y, int hp, char skin, int dmg, std::string type) : Entity(x, y, hp, dmg, skin), _type(type)
{
	return;
}

Enemy::~Enemy(void)
{
	std::cout <<"Destructor Called, Class: Enemy" << std::endl;
	return;
}

Enemy::Enemy(Enemy const & src): Entity(src)
{
	std::cout<<"Copy Constructor Called" <<std::endl;
	*this = src;
	return;
}

Enemy & Enemy::operator=(Enemy const & rhs)
{
	std::cout << "Assignation Called, Class: Enemy" <<std::endl;
	this->_x = rhs._x;
	this->_y = rhs._y;
	this->_hp = rhs._hp;
	this->_dmg = rhs._dmg;
	this->_skin = rhs._skin;
	this->_type = rhs._type;
	return *this;
}

void	Enemy::Move(std::string direction, t_data_entities &data) {
	(void)direction;
	this->Entity::Move(LEFT, data);
	return;
}
