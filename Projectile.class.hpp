/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Projectile.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oberrada <oberrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 19:33:38 by oberrada          #+#    #+#             */
/*   Updated: 2015/01/10 22:07:54 by oberrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROJECTILE_CLASS_H
#define PROJECTILE_CLASS_H

#include "Entity.class.hpp"

class Projectile: public Entity{
	public:
		Projectile(void);
		Projectile(int x, int y, int hp);
		~Projectile(void);
		Projectile(Projectile const & src);
		Projectile & operator=(Projectile const & rhs);
};

#endif //***********PROJECTILE_CLASS_H//
