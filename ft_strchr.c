/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 09:40:09 by ysoroko           #+#    #+#             */
/*   Updated: 2020/11/25 16:05:47 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	*my_str;

	my_str = (char *)(str);
	i = 0;
	while (my_str[i] != '\0')
	{
		if (my_str[i] == c)
		{
			return (&my_str[i]);
		}
		i++;
	}
	if (my_str[i] == c)
	{
		return (&my_str[i]);
	}
	return (0);
}
