/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 09:39:00 by ysoroko           #+#    #+#             */
/*   Updated: 2020/11/23 12:36:32 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*my_haystack;
	char	*my_needle;

	i = 0;
	my_haystack = (char *)(haystack);
	my_needle = (char *)(needle);
	if (my_needle[0] == '\0')
		return (my_haystack);
	while (my_haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (my_needle[j] == my_haystack[i + j] && my_haystack[i + j] != '\0'
				&& my_needle[j] != '\0' && i + j < len)
		{
			j++;
		}
		if (my_needle[j] == '\0')
		{
			return (&my_haystack[i]);
		}
		i++;
	}
	return (0);
}
