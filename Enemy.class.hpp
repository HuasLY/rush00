/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oberrada <oberrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 16:29:42 by oberrada          #+#    #+#             */
/*   Updated: 2015/01/10 22:06:20 by oberrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_CLASS_H
# define ENEMY_CLASS_H

#include "Entity.class.hpp"
#include <string>

class Enemy: public Entity{
	public:
    	Enemy(void);
	    Enemy(int x, int y, int hp, int dmg = 1, std::string type = "basic");
		~Enemy(void);
	    Enemy(Enemy const & src);
	    Enemy & operator=(Enemy const & rhs);
    
	private:
	    int		Dmg;
		std::string	Type;
};

#endif //***********ENEMY_CLASS_H//
