/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Entity.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oberrada <oberrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 15:13:40 by oberrada          #+#    #+#             */
/*   Updated: 2015/01/11 18:56:00 by hly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENTITY_CLASS_H
#define ENTITY_CLASS_H

#include <string>

class Entity{
	public:
		Entity(void);
		Entity(int x, int y, int hp, int dmg, char skin = 'o');
		~Entity(void);
		Entity(Entity const & src);
		Entity & operator=(Entity const & rhs);

		virtual void	Move(std::string direction);
		void	Die(void);
		int		getX(void);
		int		getY(void);
		char	getSkin(void) const;
		//todo: getHP

	protected:
		int		_x;
		int		_y;
		int		_hp;
		int		_dmg;
		char	_skin;
};

#endif //***********ENTTY_CLASS_H//
