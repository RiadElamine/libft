/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 23:43:48 by relamine          #+#    #+#             */
/*   Updated: 2023/11/15 21:43:56 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_substr(const char *s, unsigned int start,size_t len)
{
    char * res;
    int size ;
    size_t strlen_of_start;
    
    if(!s) 
        return (0);

    if(start >= ft_strlen(s))
        return(ft_strdup("\0"));
    
    strlen_of_start = ft_strlen(&s[start]);
    if(len > strlen_of_start)
        size = strlen_of_start + 1;
    else
        size = len + 1;
        
    res =malloc(size * sizeof(char));
    if(!res)
        return(NULL);

    ft_strlcpy(res, &s[start], size); 
    return(res);
}
// int main ()
// {
//     printf("%s", ft_substr("", 0,1));
// }

//this who work in  :gcc -Wall -Wextra -Werror ft_substr.c ft_strlcpy.c ft_strlen.c