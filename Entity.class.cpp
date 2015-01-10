/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Entity.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oberrada <oberrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 15:14:04 by oberrada          #+#    #+#             */
/*   Updated: 2015/01/10 22:04:24 by oberrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Entity.class.hpp"

Entity::Entity(void)
{
	X = 0;
	Y = 0;
	Hp = 1;
	std::cout << "Default Constructor Called, Class Entity" <<std::endl;
	std::cout<<"Your Position is "<<this->X<<"/"<<this->Y<<" And your Hp: "<<this->Hp<< std::endl;
	return;
}

Entity::Entity(int x, int y, int hp) : X(x), Y(y), Hp(hp)
{

	std::cout << "Constructor Called, Class Entity" <<std::endl;
	std::cout<<"Your Position is "<<this->X<<"/"<<this->Y<<" And your Hp: "<<this->Hp<< std::endl;
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
	this->X = rhs.X;
	this->Y = rhs.Y;
	this->Hp = rhs.Hp;
	return *this;
}

int		Entity::GetValueX(void)
{
	return this->X;
}

int		Entity::GetValueY(void)
{
	return this->Y;
}

void	Entity::Move(std::string direction)
{
	std::cout <<"Function Move Called"<<std::endl;
	if (direction == "haut")
		this->Y = this->Y - 1;
	if (direction == "bas")
		this->Y = this->Y + 1;
	if (direction == "droit")
		this->X = this->X + 1;
	if (direction == "gauche")
		this->X = this->X - 1;
	return;
}

void	Entity::Die(void)
{
	std::cout <<"Function Die Called"<<std::endl;
	if (this->Hp == 0)
		delete this;
	return;
}
