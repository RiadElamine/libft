/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 15:19:07 by relamine          #+#    #+#             */
/*   Updated: 2023/11/06 17:16:03 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"



size_t ft_strlcpy(char * dst, const char * src, size_t dstsize)
{
    size_t      src_len;
    size_t      j;

    src_len = ft_strlen(src);
    j = 0;
    if (dstsize > 0)
    {
        while(src[j] != '\0' && j < dstsize -1)
        {
            dst[j] = src[j];
            j++;
        }
        dst[j] = '\0';
    }
    return (src_len);
}


// #include <string.h>
// int main()
// {
//     char d[2] = "";
//     const char *src = "01210222";
//     printf("%zu\n", ft_strlcpy(d, src, 7));
//     printf("%s\n", d);
    
//     // char d2[] = "riad";
//     // printf("%zu", strlcpy(d2, src,0));
//     // printf("%s", d2);

// }