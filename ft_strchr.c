/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:10:42 by relamine          #+#    #+#             */
/*   Updated: 2023/11/08 22:21:01 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
char    *ft_strchr(const char *s, int c)
{
    size_t i;
    i = 0;
    while (*s != '\0')
    {
        if ((unsigned char)c == (unsigned char )*s)
            return ((char *)(s));
        s++;
    }
    if((char)c == *s)
        return ((char *)(s));
    return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int main(){
//     const char s[] = "teste";
//     const char *p = s;
//     int c = '\0';
//     printf("%s \n", strchr(p, c));
// }