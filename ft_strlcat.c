/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 18:52:50 by relamine          #+#    #+#             */
/*   Updated: 2023/11/12 10:14:46 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"


size_t	ft_strlcat(char *dest,const char *src, size_t size)
{
	size_t	j;
	size_t	len_src;
	size_t	len_dest;
	
	len_src = ft_strlen(src);
	if (!size)
		return(len_src);

	len_dest = ft_strlen(dest);
    j = 0;
	if (size > len_dest)
	{
		return (ft_strlcpy(&dest[len_dest],src,size - len_dest) + len_dest);
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