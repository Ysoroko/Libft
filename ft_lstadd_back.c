/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 15:00:08 by ysoroko           #+#    #+#             */
/*   Updated: 2020/11/23 17:27:43 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *current;

	if (lst == 0 || new == 0)
	{
		return ;
	}
	current = *lst;
	if (current == 0)
		*lst = new;
	else
	{
		while (current->next != 0)
		{
			current = current->next;
		}
		current->next = new;
		new->next = 0;
	}
}
