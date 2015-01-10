/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oberrada <oberrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 16:34:08 by oberrada          #+#    #+#             */
/*   Updated: 2015/01/10 22:06:02 by oberrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Enemy.class.hpp"

Enemy::Enemy(void)
{
	X = 0;
	Y = 0;
	Hp = 1;
	Dmg = 1;
	std::cout << "Default Constructor Called, Class Enemy" <<std::endl;

	std::cout<<"Your Position is "<<this->X<<"/"<<this->Y<<" And your Hp: "<<this->Hp<<" Damag: "<< this->Dmg<<" Type: "<<this->Type<<std::endl;
	return;
}

Enemy::Enemy(int x, int y, int hp, int dmg, std::string type) : Entity(x, y, hp), Dmg(dmg), Type(type)
{
    
	std::cout << "Constructor Called, Class Enemy" <<std::endl;
	std::cout<<"Your Position is "<<this->X<<"/"<<this->Y<<" And your Hp: "<<this->Hp<<" Damag: "<< this->Dmg<<" Type: "<<this->Type<<std::endl;
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
	this->X = rhs.X;
	this->Y = rhs.Y;
	this->Hp = rhs.Hp;
	this->Dmg = rhs.Dmg;
	this->Type = rhs.Type;
	return *this;
}
