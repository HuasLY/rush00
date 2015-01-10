/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Projectile.class.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oberrada <oberrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 19:35:51 by oberrada          #+#    #+#             */
/*   Updated: 2015/01/10 22:07:54 by oberrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Entity.class.hpp"
#include "Projectile.class.hpp"

Projectile::Projectile(void)
{
	X = 0;
	Y = 0;
	Hp = 1;
	std::cout << "Default Constructor Called, Class Projectile" <<std::endl;
	std::cout<<"Your Position is "<<this->X<<"/"<<this->Y<<" And your Hp: "<<this->Hp<<std::endl;
	return;
}

Projectile::Projectile(int x, int y, int hp) : Entity(x, y, hp)
{
    
	std::cout << "Constructor Called, Class Projectile" <<std::endl;
	std::cout<<"Your Position is "<<this->X<<"/"<<this->Y<<" And your Hp: "<<this->Hp<<std::endl;
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
	this->X = rhs.X;
	this->Y = rhs.Y;
	this->Hp = rhs.Hp;
	return *this;
}
