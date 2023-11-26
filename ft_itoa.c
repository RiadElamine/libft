/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:02:28 by relamine          #+#    #+#             */
/*   Updated: 2023/11/26 06:10:10 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len(long i)
{
	int	count;

	count = 0;
	if (i == 0)
		return (1);
	if (i < 0)
	{
		i *= -1;
		count++;
	}
	while (i > 0)
	{
		count++;
		i = i / 10;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int		lenint;
	long	nb;
	char	*s;

	nb = n;
	lenint = len(nb);
	s = malloc(lenint + 1);
	if (!s)
		return (NULL);
	s[lenint--] = '\0';
	if (nb == 0)
		s[0] = '0';
	if (nb < 0)
	{
		s[0] = '-';
		nb *= -1;
	}
	while (nb > 0)
	{
		s[lenint] = (nb % 10) + '0';
		lenint--;
		nb /= 10;
	}
	return (s);
}
