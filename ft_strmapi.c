/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 12:33:25 by relamine          #+#    #+#             */
/*   Updated: 2023/11/26 05:54:51 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)( unsigned int, char))
{
	unsigned int	i;
	char			*j;

	if (!s || !f)
		return (NULL);
	j = malloc(ft_strlen(s) + 1);
	if (!j)
		return (NULL);
	i = 0;
	while (s[i])
	{
		j[i] = f(i, s[i]);
		i++;
	}
	j[i] = '\0';
	return (j);
}
