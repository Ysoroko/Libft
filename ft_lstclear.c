/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 15:43:21 by ysoroko           #+#    #+#             */
/*   Updated: 2020/11/23 17:34:34 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;
	t_list	*temp2;

	if (lst == 0 || del == 0 || *lst == 0)
		return ;
	temp = *lst;
	temp2 = temp;
	while (temp != 0)
	{
		del(temp->content);
		temp = temp->next;
		free(temp2);
		temp2 = temp;
	}
	*lst = 0;
}
