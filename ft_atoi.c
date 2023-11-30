/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 21:04:43 by relamine          #+#    #+#             */
/*   Updated: 2023/11/30 20:54:08 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checkresult(int signe)
{
	if (signe == -1)
		return (0);
	return (-1);
}

int	ft_atoi(const char *str)
{
	int			signe;
	long long	res;

	res = 0;
	signe = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			signe = -1;
		str++;
	}
	while (*str && ft_isdigit(*str))
	{
		if ((res > (9223372036854775807 / 10)) || (res == (9223372036854775807
					/ 10) && *str > '7'))
		{
			return (ft_checkresult(signe));
		}
		res = res * 10 + (*str - 48);
		str++;
	}
	return (res * signe);
}
