/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Entity.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oberrada <oberrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 15:13:40 by oberrada          #+#    #+#             */
/*   Updated: 2015/01/10 22:03:25 by oberrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENTITY_CLASS_H
#define ENTITY_CLASS_H

#include <string>

class Entity{
	public:
		Entity(void);
		Entity(int x, int y, int hp);
		~Entity(void);
		Entity(Entity const & src);
		Entity & operator=(Entity const & rhs);

		void	Move(std::string direction);
		void	Die(void);
		int		GetValueX(void);
		int		GetValueY(void);
		//todo: getHP

	protected:
		int		X;
		int		Y;
		int		Hp;
};

#endif //***********ENTTY_CLASS_H//
