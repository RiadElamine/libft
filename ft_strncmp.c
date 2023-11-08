/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 21:39:29 by relamine          #+#    #+#             */
/*   Updated: 2023/11/07 16:16:05 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *str1, const char *str2, size_t n)
{
    size_t i;
    unsigned char *s1 = (unsigned char *)str1;
    unsigned char *s2 =(unsigned char *)str2;
    if(n == 0)
        return (0);
    i = 0;
    while(s1[i] != '\0' && s2[i] != '\0' && i < (n - 1) && s1[i] == s2[i])
    {
        i++;
    }
    return (s1[i] - s2[i]);
}
