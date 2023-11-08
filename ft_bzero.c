/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 12:39:01 by relamine          #+#    #+#             */
/*   Updated: 2023/11/07 15:22:55 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"




void ft_bzero (void *ptr, size_t size)
{
    ft_memset(ptr, 0, size);
}


// int main()
// {
//     char str[10];
//     bzero (str, sizeof(str));
// }