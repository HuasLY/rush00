/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oberrada <oberrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 15:45:31 by oberrada          #+#    #+#             */
/*   Updated: 2015/01/11 22:50:01 by hly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PLAYER_CLASS_H
# define PLAYER_CLASS_H

#include "Entity.class.hpp"
#include "Projectile.class.hpp"

class Player: public Entity{
	public:
    	Player(void);
    	Player(int x, int y, int hp, int dmg, char skin);
	    ~Player(void);
	    Player(Player const & src);
   		Player & operator=(Player const & rhs);
		Projectile *attack(int X, int Y, int HP = 1);
		bool	isAlive(void) const;
};


#endif //***********PLAYER_CLASS_H//
