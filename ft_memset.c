/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 17:48:32 by relamine          #+#    #+#             */
/*   Updated: 2023/11/29 02:04:37 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *voidptr, int value, size_t count)
{
	size_t			i;
	unsigned char	*charptr;

	i = 0;
	charptr = (unsigned char *)voidptr;
	while (i < count)
	{
		charptr[i] = (unsigned char)(value);
		i++;
	}
	return (voidptr);
}
