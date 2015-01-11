/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Etoile.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oberrada <oberrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/11 20:04:36 by oberrada          #+#    #+#             */
/*   Updated: 2015/01/11 23:06:14 by oberrada         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef PROJECTILE_CLASS_H
#define PROJECTILE_CLASS_H

#include "Entity.class.hpp"
#include "ft_retro.hpp"
#include <string>

class Etoile: public Entity{
public:
    Etoile(void);
    Etoile(int x, int y, int hp, int dmg, char skin);
    ~Etoile(void);
    Etoile(Etoile const & src);
    Etoile & operator=(Etoile const & rhs);
    virtual void	Move(std::string direction);
	static void	scrolling(void);
private:
static	int _Movecount;

};

#endif //***********PROJECTILE_CLASS_H//
