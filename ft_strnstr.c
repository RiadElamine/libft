/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 23:15:57 by relamine          #+#    #+#             */
/*   Updated: 2023/11/30 23:41:27 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	b;

	if (!haystack && !len)
		return (NULL);
	if (!*needle)
		return ((char *)haystack);
	while (*haystack && len != 0)
	{
		b = 0;
		while (haystack[b] == needle[b] && needle[b] != '\0' && len > b)
			b++;
		if (needle[b] == '\0')
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
