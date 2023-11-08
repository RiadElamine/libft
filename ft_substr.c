/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 23:43:48 by relamine          #+#    #+#             */
/*   Updated: 2023/11/08 10:01:32 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_substr(const char *s, unsigned int start,size_t len)
{
    char * res;
    int size ;


    size = (int)len + 1;  
    res =malloc(size * sizeof(char));
    if(!res)
        return(NULL);
    if( start >= ft_strlen(s))
        return((char *)(s + ft_strlen(s)));
    ft_strlcpy(res, &s[start], size);

    return(res);
}
// int main ()
// {
//     printf("%s", ft_substr("riad el", 2,10));
// }

//this who work in  :gcc -Wall -Wextra -Werror ft_substr.c ft_strlcpy.c ft_strlen.c