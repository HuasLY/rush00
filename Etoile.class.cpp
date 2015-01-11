/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Etoile.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oberrada <oberrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/11 20:04:40 by oberrada          #+#    #+#             */
/*   Updated: 2015/01/11 23:07:14 by oberrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string>
#include <iostream>
#include "Entity.class.hpp"
#include "Etoile.class.hpp"
#include "ft_retro.hpp"

Etoile::Etoile(void)
{
	return;
}

Etoile::Etoile(int x, int y, int hp, int dmg, char skin) : Entity(x, y, hp, dmg, skin)
{
	return;
}

Etoile::~Etoile(void)
{
	std::cout <<"Destructor Called, Class: Etoile" << std::endl;
	return;
}

Etoile::Etoile(Etoile const & src): Entity(src)
{
	std::cout<<"Copy Constructor Called" <<std::endl;
	*this = src;
	return;
}

Etoile & Etoile::operator=(Etoile const & rhs)
{
	std::cout << "Assignation Called, Class: Etoile" <<std::endl;
	this->_x = rhs._x;
	this->_y = rhs._y;
	this->_hp = rhs._hp;
	this->_dmg = rhs._dmg;
	this->_skin = rhs._skin;
	return *this;
}

void	Etoile::scrolling(void)
{
	Etoile::_Movecount++;
}

void	Etoile::Move(std::string direction)
{
	(void)direction;
	if(_Movecount % 8 == 0)
	{
		this->Entity::Move(LEFT);
/*		if (collision(*this, data))
			this->Die();*/
	}
	return;
}

int	 Etoile::_Movecount = 0;
