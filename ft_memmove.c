/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 12:40:44 by relamine          #+#    #+#             */
/*   Updated: 2023/11/07 22:17:36 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void * ft_memmove(void *dst, const void *src, size_t len)
{
    size_t i;
    unsigned char * d;
    unsigned char * s;

    i = 0;
    d = (unsigned char *)dst;
    s = (unsigned char *)src;
    if(!d && !s)
        return (0);
    if(d > s)
    {
            while(len-- > 0)
                d[len] = s[len];
    }
    else 
    {
        while(i < len)
        {
            d[i] = s[i];
            i++;
        }
    }
    return (dst);
}
// int main()
// {
//     char *s1 = "salah-eddine";
//     char *s2 = "salah-eddine";

//     // printf("%s\n", ft_memmove(s1, s1, 3));
//     printf("%s\n", memmove(s2 , s2 + 3, 6));
// }