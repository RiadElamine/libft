/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:40:56 by relamine          #+#    #+#             */
/*   Updated: 2023/11/17 09:59:49 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	if (!s1 && !s2)
		return (NULL);
	if (!s2)
		return (strdup(s1));
	if (!s1)
		return (strdup(s2));
	i = 0;
	j = 0;
	str = malloc(strlen(s2) + strlen(s1) + 1);
	if (!str)
		return (0);
	while (i < strlen(s1))
	{
		str[i] = s1[i];
		i++;
	}
	while (j < strlen(s2))
		str[i++] = s2[j++];
	str[i] = '\0';
	return ((char *)str);
}
