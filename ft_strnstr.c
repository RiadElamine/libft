/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 23:15:57 by relamine          #+#    #+#             */
/*   Updated: 2023/11/17 04:37:33 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	b;

	if (!str && !len)
		return (0);
	if (!*find)
		return ((char *)str);
	while (*str && len != 0)
	{
		b = 0;
		while (str[b] == find[b] && find[b] != '\0' && len > b)
			b++;
		if (find[b] == '\0')
			return ((char *)str);
		str++;
		len--;
	}
	return (NULL);
}
