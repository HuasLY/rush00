/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Projectile.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oberrada <oberrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 19:35:51 by oberrada          #+#    #+#             */
/*   Updated: 2015/01/11 19:54:48 by hly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Entity.class.hpp"
#include "Projectile.class.hpp"
#include "ft_retro.hpp"

Projectile::Projectile(void)
{
	return;
}

Projectile::Projectile(int x, int y, int hp, int dmg, char skin) : Entity(x, y, hp, dmg, skin)
{
	return;
}

Projectile::~Projectile(void)
{
	std::cout <<"Destructor Called, Class: Projectile" << std::endl;
	return;
}

Projectile::Projectile(Projectile const & src): Entity(src)
{
	std::cout<<"Copy Constructor Called" <<std::endl;
	*this = src;
	return;
}

Projectile & Projectile::operator=(Projectile const & rhs)
{
	std::cout << "Assignation Called, Class: Projectile" <<std::endl;
	this->_x = rhs._x;
	this->_y = rhs._y;
	this->_hp = rhs._hp;
	this->_dmg = rhs._dmg;
	this->_skin = rhs._skin;
	return *this;
}

void	Projectile::Move(std::string direction, t_data_entities &data)
{
	(void)direction;
	this->Entity::Move(RIGHT);
	if (collision(*this, data))
		this->Die();
	return;
}
