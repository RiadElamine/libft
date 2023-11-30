/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:52:50 by relamine          #+#    #+#             */
/*   Updated: 2023/12/01 00:05:09 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	j;
	size_t	len_src;
	size_t	len_ds;

	len_src = ft_strlen(src);
	if (!dstsize)
		return (len_src);
	len_ds = ft_strlen(dest);
	j = 0;
	if (dstsize > len_ds)
		return (ft_strlcpy(&dest[len_ds], src, dstsize - len_ds) + len_ds);
	else
		return (len_src + dstsize);
}
