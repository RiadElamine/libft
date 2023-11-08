/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:52:50 by relamine          #+#    #+#             */
/*   Updated: 2023/11/08 04:42:16 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"



size_t	ft_strlcat(char *dest,const char *src, size_t size)
{
	size_t	j;
	size_t	len_src;
	size_t	len_dest;
    size_t  i;
	
	len_src = ft_strlen(src);
	if (!size)
		return(len_src);

	len_dest = ft_strlen(dest);
    i = len_dest;
    j = 0;
	if (size != 0 && size > len_dest)
	{
		while (src[j] != '\0' && j < (size - len_dest -1))
		{
			dest[i] = src[j];
			j++;
			i++;
		}
		dest[i] = '\0';
		return (len_src + len_dest);
	}
	else
		return (len_src + size);
}




// int main()
// {
//     char *destination = NULL;
//     // char *destination1 = NULL;
//     const char *source = " ";
//     printf("%zu  %s\n",ft_strlcat(destination, source,12),destination);
//     // printf("%zu  %s\n",strlcat(destination1, source,12),destination1);


//     return 0;
// }