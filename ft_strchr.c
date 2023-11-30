/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:10:42 by relamine          #+#    #+#             */
/*   Updated: 2023/11/30 20:59:13 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (*s != '\0')
	{
		if ((char)c == *s)
			return ((char *)(s));
		s++;
	}
	if ((char)c == *s)
		return ((char *)(s));
	return (NULL);
}
