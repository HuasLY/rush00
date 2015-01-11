/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_retro.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hly <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 20:03:58 by hly               #+#    #+#             */
/*   Updated: 2015/01/11 16:54:38 by hly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_RETRO_H
# define FT_RETRO_H

# include "Entity.class.hpp"
# define UP "up"
# define DOWN "down"
# define LEFT "left"
# define RIGHT "right"
# define LINES 20
# define COLUMNS 100
# define ENEMY_SKIN 'E'
# define SPAWN_RATE 30

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
