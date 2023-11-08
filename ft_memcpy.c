/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 23:35:31 by relamine          #+#    #+#             */
/*   Updated: 2023/11/06 17:15:34 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void * ft_memcpy(void * dst, const void *src, size_t n)
{
    size_t i;
    unsigned char *s;
    unsigned char *d;

    i = 0;
    d = (unsigned char *)dst;
    s = (unsigned char *)src;
    if(!s && !d)
    {
        return(0);
    }
    while(i < n)
    {
        d[i] = s[i];
        i++;
    }
    return (dst);
}
// int main()
// {
//     char d[] = "";
//     const char *src = "";
//     printf("%s\n", ft_memcpy(d, src, -1));
//     // printf("%s\n", d);
    
//     // char d2[] = "riad";
//     // printf("%zu", strlcpy(d2, src,0));
//     // printf("%s", d2);

// }