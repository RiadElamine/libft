/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:48:32 by relamine          #+#    #+#             */
/*   Updated: 2023/11/30 23:52:32 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*charptr;

	i = 0;
	charptr = (unsigned char *)b;
	while (i < len)
	{
		charptr[i] = (unsigned char)(c);
		i++;
	}
	return (b);
}
