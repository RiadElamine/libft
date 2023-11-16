/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 21:31:33 by relamine          #+#    #+#             */
/*   Updated: 2023/11/11 11:44:53 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
size_t ft_strlen(const char *s)
{
    size_t     i;

    i = 0;
    while (s[i] != '\0')
    {
        i++;
    }
    return (i);
}
// #include <stdio.h>
// int main(){
//     const char s[] = "";
//     const char *p = s;
//     int c = 't';
//     printf("%s \n", ft_strrchr(p, c));
// }