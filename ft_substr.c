/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 23:43:48 by relamine          #+#    #+#             */
/*   Updated: 2023/11/30 23:37:27 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	int		size ;
	size_t	strlen_of_start;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	strlen_of_start = ft_strlen(&s[start]);
	if (len > strlen_of_start)
		size = strlen_of_start + 1;
	else
		size = len + 1;
	res = malloc(size * sizeof(char));
	if (!res)
		return (NULL);
	ft_strlcpy(res, &s[start], size);
	return (res);
}
