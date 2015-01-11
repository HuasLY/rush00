/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Projectile.class.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oberrada <oberrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 19:33:38 by oberrada          #+#    #+#             */
/*   Updated: 2015/01/11 20:38:37 by oberrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROJECTILE_CLASS_H
#define PROJECTILE_CLASS_H

#include "Entity.class.hpp"
#include "ft_retro.hpp"

class Projectile: public Entity{
	public:
		Projectile(void);
		Projectile(int x, int y, int hp, int dmg, char skin);
		~Projectile(void);
		Projectile(Projectile const & src);
		Projectile & operator=(Projectile const & rhs);
		virtual void	Move(std::string direction);
};

#endif //***********PROJECTILE_CLASS_H//
