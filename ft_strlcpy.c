/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 10:34:29 by ysoroko           #+#    #+#             */
/*   Updated: 2020/11/23 12:31:26 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_length;
	char	*my_src;

	my_src = (char *)(src);
	if (my_src == 0)
		return (0);
	src_length = ft_strlen(my_src);
	if (dstsize == 0 || dest == 0)
	{
		return (src_length);
	}
	i = 0;
	while (my_src[i] != '\0' && i < (dstsize - 1))
	{
		dest[i] = my_src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_length);
}
