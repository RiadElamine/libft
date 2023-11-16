/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:40:56 by relamine          #+#    #+#             */
/*   Updated: 2023/11/10 18:07:06 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strjoin(const char *s1, const char *s2)
{
    if(!s1 && !s2)
        return (NULL);

    if(!s1)
        return(strdup(s2));
    if(!s2)
        return(strdup(s1));

    
    char *str;
    size_t size;
    size_t i;
    size_t j;

    size = strlen(s1) + strlen(s2) + 1;
    i = 0;
    j = 0;
    
    str = malloc(size);
    if(!str)
        return (0);
    
    while(i < strlen(s1))
    {
        str[i] = s1[i];
        i++;
    } 
    while(j < strlen(s2))
    {
        str[i] = s2[j];
        j++;
        i++;
    }  
    str[i] = '\0';
    return((char *)str);

}

// int main()
// {
//     printf("%s",ft_strjoin("", ""));
// }