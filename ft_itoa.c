/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:02:28 by relamine          #+#    #+#             */
/*   Updated: 2023/11/13 03:44:21 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static int len(int i)
{
    int count;

    count = 0;
    if(i < 0)
    {
        i *= -1;
        count++;
    }
    if(i == 0)
        return(count + 1);
    while(i > 0)
    {
        count++;
        i = i / 10;
    }
    return(count);
}
char *ft_itoa(int n)
{
    if(n == -2147483648)
    {
        char *s = malloc(12);
        if(!s)
            return NULL;
        ft_strlcpy(s,"-2147483648",12);
        return(s);
    }
    int lenint = len(n);
    char *s = malloc(lenint + 1);
    if(!s)
        return NULL;
    s[lenint] = '\0';
    int sign = 0;
    
    if(n < 0)
    {
        sign = 1;
        s[0] = '-';
        n *= -1;
    }
    while(lenint > 0)  
    {
        if(sign && lenint - 1 == 0)
            return (s);
        if(n >= 0 && n <= 9)
            s[lenint - 1] = n + '0';
        else
            s[lenint - 1] = (n % 10) + '0';
        lenint--;
        n /= 10;
    }
    return (s);
}
// int main()
// {
//     // printf("%d\n",len(-2147483648));
//     printf("%s\n",ft_itoa(-2147483648));
// }

