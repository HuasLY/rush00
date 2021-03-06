/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oberrada <oberrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 16:29:42 by oberrada          #+#    #+#             */
/*   Updated: 2015/01/11 23:33:31 by hly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_CLASS_H
# define ENEMY_CLASS_H

#include <string>
#include "Entity.class.hpp"

class Enemy: public Entity{
	public:
    	Enemy(void);
	    Enemy(int x, int y, int hp, char skin, int dmg = 1, std::string type = "basic");
		~Enemy(void);
	    Enemy(Enemy const & src);
	    Enemy & operator=(Enemy const & rhs);
		virtual void	Move(std::string direction, t_data_entities &data);
    
	private:
		std::string	_type;
};

#endif //***********ENEMY_CLASS_H//
