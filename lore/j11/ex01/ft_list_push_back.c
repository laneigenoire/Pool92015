/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gtserenb <gtserenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/16 16:12:59 by gtserenb          #+#    #+#             */
/*   Updated: 2015/09/16 17:09:04 by gtserenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*list;
	t_list	*add;

	add = ft_create_elem(data);
	list = *begin_list;
	while (list->next)
	{
		list = list->next;
	}
	list->next = add;
}
