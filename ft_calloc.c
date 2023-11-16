/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:25:35 by relamine          #+#    #+#             */
/*   Updated: 2023/11/11 12:29:06 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void * ft_calloc(size_t count, size_t size)
{
    void *ptr = malloc(size * count);
    if(!ptr)
        return (0);
    ft_bzero (ptr, count * size);
    return (ptr);
}

