/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:01:14 by relamine          #+#    #+#             */
/*   Updated: 2023/11/06 17:15:02 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void * ft_memchr(const void *voids, int c, size_t size)
{
    const unsigned char *ptr;
    size_t i;

    ptr = (const unsigned char *)(voids);
    i = 0;
    while(i < size)
    {
        if(ptr[i] == (unsigned char)c)
            return ((void *)(ptr + i));
        i++;
    }
    return (0);
}




// #include <string.h>
// int main ()
// {
//     const void *vptr = "";
//     int cc = '\0';
     
//    // const char *ptr = ft_memchr(vptr, cc, strlen(vptr));
//     //const char *ptr = memchr(vptr, cc, strlen(vptr));

//   //  printf("%s ", memchr(vptr, cc, strlen(vptr)));
//     printf("%s ", ft_memchr(vptr, cc, strlen(vptr)));
    

// }
