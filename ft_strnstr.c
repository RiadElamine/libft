/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 23:15:57 by relamine          #+#    #+#             */
/*   Updated: 2023/11/08 16:40:30 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *str, const char *find, size_t len)
{
    int i;
    int b;
    size_t len2;

    i = 0;
	if (!str || !len)
		return (NULL);
    if (find[i] == '\0' || (int)len < 0)
        return ((char *)str);
    while (*str && len > 0)
    {  
        b = 0;
        len2 = len;
        while (str[b] == find[b] && find[b] != '\0' && (int)len2 > b)
        {
            b++;
        }
        
        if (find[b] == '\0')
            return ((char *)str);
        str++;
        len--;
    }
    return (NULL);
}


int main()
{
    // char haystack[30] = "aaabcabcd";
    char needle[10] = "aabc";
    printf("%s", ft_strnstr((const char *)"", needle, -2));
}
