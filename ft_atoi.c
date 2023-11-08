/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 21:04:43 by relamine          #+#    #+#             */
/*   Updated: 2023/11/08 15:05:45 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    while ((*str >= 9 && *str <= 13) || *str == 32)
    {
        str++;
    }
    
    int signe;
    long long res;

    res = 0;
    signe = 1;
    if (*str == '-' || *str == '+')
    {
        if(*str == '-')
            signe = -1;
        str++;
    }
    while (*str && ft_isdigit(*str))
    {
        if( (res > (9223372036854775807 / 10)) || (res == (9223372036854775807 / 10) && *str  > '7'))
        {
            if(signe == -1)
                return (0);
            else if( signe == 1)
                return (-1);
        }
        res = res * 10  + (*str - 48);
        str++;
    }
    return (res * signe);    
}

//  #include <stdlib.h>
//  #include <stdio.h>
// int main()
// {
//     char str[] = "92233720368547758071";
//     printf("%d\n", ft_atoi(str));
//     printf("%d", atoi(str));
// }