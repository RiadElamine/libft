/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 18:33:55 by relamine          #+#    #+#             */
/*   Updated: 2023/11/07 22:39:31 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"


int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;

    unsigned char *a = (unsigned char*)s1;
    unsigned char *b = (unsigned char*)s2;
    if(n == 0)
        return (0);
    i = 0;
    while(i < (n - 1) && a[i] == b[i])
    {
        i++;
    }
    return (a[i] - b[i]);
}
