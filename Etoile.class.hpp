/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Etoile.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oberrada <oberrada@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/11 20:04:36 by oberrada          #+#    #+#             */
/*   Updated: 2015/01/11 23:40:02 by hly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ETOILE_CLASS_H
# define ETOILE_CLASS_H

#include <string>
#include "Entity.class.hpp"
#include "ft_retro.hpp"

class Etoile: public Entity{
public:
    Etoile(void);
    Etoile(int x, int y, int hp, int dmg, char skin);
    ~Etoile(void);
    Etoile(Etoile const & src);
    Etoile & operator=(Etoile const & rhs);
    virtual void	Move(std::string direction, t_data_entities &data);
	static void	scrolling(void);
private:
	static	int _Movecount;

};

#endif //***********ETOILE_CLASS_H//
