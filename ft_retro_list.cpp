/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_retro_list.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hly <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/10 20:28:29 by hly               #+#    #+#             */
/*   Updated: 2015/01/11 18:55:28 by hly              ###   ########.fr       */
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

void	ft_print_entities(t_data_entities data)
{
	t_entities	*tmp;

	tmp = data.first;
	while (tmp)
	{
		std::cout << tmp->entity->getX() << ", " << tmp->entity->getY() << " ";
		std::cout << std::endl;
		tmp = tmp->next;
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
		if (data->first == NULL)
			data->first = newEntity;
		else
			data->last->next = newEntity;
		data->last = newEntity;
	}
	return (data);
}
