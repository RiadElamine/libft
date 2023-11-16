/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 18:15:17 by relamine          #+#    #+#             */
/*   Updated: 2023/11/14 12:30:15 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putchar_fd(char c, int fd)
{
        write(fd, &c, 1);
}
// int main()
// {
// int fd = open("foo.txt", O_CREAT | O_WRONLY , 0777);


// ft_putchar_fd('h', fd);

// close(fd);
// return 0;
// }