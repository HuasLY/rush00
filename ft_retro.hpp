/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_retro.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hly <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 20:03:58 by hly               #+#    #+#             */
/*   Updated: 2015/01/10 21:21:15 by hly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RETRO_H
# define FT_RETRO_H

#include "Entity.class.hpp"

typedef struct		s_entities
{
	Entity				*entity;
	struct s_entities	*next;
}					t_entities;

typedef struct		s_data_entities
{
	t_entities	*first;
	t_entities	*last;
}					t_data_entities;

void	ft_init_data_entities(t_data_entities *data);
void	ft_print_entities(t_data_entities data);
t_data_entities*	ft_add_entity(t_data_entities *data, Entity *entity);
#endif
