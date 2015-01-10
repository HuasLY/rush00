/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Player.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oberrada <oberrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 15:45:31 by oberrada          #+#    #+#             */
/*   Updated: 2015/01/10 22:05:40 by oberrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PLAYER_CLASS_H
# define PLAYER_CLASS_H

#include "Entity.class.hpp"
#include "Projectile.class.hpp"

class Player: public Entity{
	public:
    	Player(void);
    	Player(int x, int y, int hp, int dmg);
	    ~Player(void);
	    Player(Player const & src);
   		Player & operator=(Player const & rhs);
		Projectile *attack(int X, int Y, int HP);
    
    
	private:
		int		Dmg;
};


#endif //***********PLAYER_CLASS_H//
