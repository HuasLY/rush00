/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_retro_list.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hly <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 20:28:29 by hly               #+#    #+#             */
/*   Updated: 2015/01/11 21:24:26 by hly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include "ft_retro.hpp"

void	ft_init_data_entities(t_data_entities *data)
{
	if (data)
	{
		data->first = NULL;
		data->last = NULL;
	}
	return;
}

t_data_entities*	ft_add_entity(t_data_entities *data, Entity *entity)
{
	t_entities	*newEntity;

	if (data && entity)
	{
		newEntity = new(t_entities);
		newEntity->entity = entity;
		newEntity->next = NULL;
		newEntity->previous = data->last;
		if (data->first == NULL)
			data->first = newEntity;
		else
			data->last->next = newEntity;
		data->last = newEntity;
	}
	return (data);
}
