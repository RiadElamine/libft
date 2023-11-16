/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 14:36:19 by relamine          #+#    #+#             */
/*   Updated: 2023/11/15 16:10:30 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strtrim(char const *s1, char const *set)
{

    int i = 0;
    char *s;

    if(!s1 || !set)
        return (0);


    i = ft_strlen(s1) - 1;
    while(i >= 0 && ft_strchr(set, s1[i]))
        i--;
    while(i >= 0 && *s1 && ft_strchr(set, *s1))
    {
        s1++;
        i--;
    }
    //len
    i++;
    
    s =malloc((i + 1) * sizeof(char));
    if(!s)
        return(NULL);
    ft_strlcpy(s, s1, i + 1);
    return(s);
    
}

// int main ()
// {
//     // printf("%s",ft_strtrim("rnrriiiad elamineee", "rien"));
//     printf("%s",ft_strtrim("youssef hjjh su", "uyo"));
// }