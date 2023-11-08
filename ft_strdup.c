/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:35:56 by relamine          #+#    #+#             */
/*   Updated: 2023/11/07 11:06:13 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"


char * ft_strdup(const char *s1)
{
    char * s2;
    int i;

    s2 =  malloc(sizeof(char) * (ft_strlen(s1) + 1));
    if(!s2)
        return (0);
    i = 0;
    while(s1[i]) 
    {
        s2[i] = s1[i];
        i++;
    }
    s2[i] = '\0';
    return(s2);
}
// int main()
// {
//     printf("%s", ft_strdup("riad"));
// }