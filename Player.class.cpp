/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oberrada <oberrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 15:50:50 by oberrada          #+#    #+#             */
/*   Updated: 2015/01/10 22:05:40 by oberrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Player.class.hpp"
#include <string>
#include <iostream>

Player::Player(void)
{
	X = 0;
	Y = 0;
	Hp = 1;
	Dmg = 1;
	std::cout << "Default Constructor Called, Class Player" <<std::endl;
	std::cout<<"Your Position is "<<this->X<<"/"<<this->Y<<" And your Hp: "<<this->Hp<<"Damage: "<<this->Dmg<<std::endl;
	return;
}

Player::Player(int x, int y, int hp, int dmg) : Entity(x, y, hp), Dmg(dmg)
{
    
	std::cout << "Constructor Called, Class Player" <<std::endl;
	std::cout<<"Your Position is "<<this->X<<"/"<<this->Y<<" And your Hp: "<<this->Hp<<" Damag: "<< this->Dmg<<std::endl;
	return;
}

Player::~Player(void)
{
	std::cout <<"Destructor Called, Class: Player" << std::endl;
	return;
}

Player::Player(Player const & src): Entity(src)
{
	std::cout<<"Copy Constructor Called" <<std::endl;
	*this = src;
	return;
}

Player & Player::operator=(Player const & rhs)
{
	std::cout << "Assignation Called, Class: Player" <<std::endl;
	this->X = rhs.X;
	this->Y = rhs.Y;
	this->Hp = rhs.Hp;
	this->Dmg = rhs.Dmg;
	return *this;
}

Projectile  *Player::attack(int X, int Y, int HP)
{
	Projectile * Attack = new Projectile(X, Y, HP);
	return Attack;
}
