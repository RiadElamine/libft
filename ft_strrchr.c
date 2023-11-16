/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:27:26 by relamine          #+#    #+#             */
/*   Updated: 2023/11/11 10:04:39 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"



char	*ft_strrchr(const char *s, int c)
{
    int la;

    la = ft_strlen(s);
	while (la >= 0)
	{
		if ((char)c == s[la])
			return ((char *)(s + la));
		la--;
	}
	return (0);
}

// #include <stdio.h>
// int main(){
//     const char s[] = "there riadjds ";
//     const char *p = s;
//     int c = 't';
//     printf("%s \n", ft_strrchr(p, c));
// }