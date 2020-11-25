/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 13:14:38 by ysoroko           #+#    #+#             */
/*   Updated: 2020/11/22 13:19:45 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	char	*my_s;
	size_t	i;

	if (s == 0)
		return (0);
	i = 0;
	my_s = (char *)(s);
	if (start >= (unsigned int)(ft_strlen(my_s)))
	{
		if (!(ret = malloc(sizeof(char) * 1)))
			return (0);
		ret[0] = 0;
		return (ret);
	}
	ret = malloc(sizeof(s[start]) * (len + 1));
	if (ret == 0)
		return (0);
	while (i < len && s[i] != 0)
	{
		ret[i] = s[start + i];
		i++;
	}
	ret[i] = 0;
	return (ret);
}
