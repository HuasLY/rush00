/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Entity.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oberrada <oberrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 15:13:40 by oberrada          #+#    #+#             */
/*   Updated: 2015/01/11 23:01:36 by hly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENTITY_CLASS_H
#define ENTITY_CLASS_H

#include <string>
#include <stdlib.h>

typedef struct s_data_entities t_data_entities;

class Entity{
	public:
		Entity(void);
		Entity(int x, int y, int hp, int dmg, char skin = 'o');
		~Entity(void);
		Entity(Entity const & src);
		Entity & operator=(Entity const & rhs);
		Entity & operator-=(int amount);

		virtual void	Move(std::string direction, t_data_entities &data);
		void	Die(t_data_entities &data, Entity *other = NULL);
		int		getX(void);
		int		getY(void);
		char	getSkin(void) const;
		int		getDmg(void) const;
		//todo: getHP

	protected:
		int		_x;
		int		_y;
		int		_hp;
		int		_dmg;
		char	_skin;
};

#endif //***********ENTTY_CLASS_H//
