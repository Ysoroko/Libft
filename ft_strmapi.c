/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysoroko <ysoroko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 18:03:29 by ysoroko           #+#    #+#             */
/*   Updated: 2020/11/22 13:19:45 by ysoroko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*temp_s;
	char			*my_s;
	unsigned int	i;
	int				len;

	if (s == 0)
		return (0);
	temp_s = (char *)s;
	i = 0;
	len = ft_strlen(temp_s);
	if (!(my_s = malloc(sizeof(char) * (len + 1))))
		return (0);
	my_s[len] = '\0';
	while (temp_s[i] != '\0')
	{
		my_s[i] = f(i, temp_s[i]);
		i++;
	}
	return (my_s);
}
