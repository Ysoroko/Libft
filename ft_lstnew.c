/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/22 14:11:54 by ysoroko           #+#    #+#             */
/*   Updated: 2020/11/22 14:17:53 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *pnt;

	pnt = malloc(sizeof(t_list));
	if (pnt == 0)
	{
		return (0);
	}
	pnt->content = content;
	pnt->next = 0;
	return (pnt);
}
