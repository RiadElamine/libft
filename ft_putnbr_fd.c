/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: relamine <relamine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 22:13:29 by relamine          #+#    #+#             */
/*   Updated: 2023/11/14 12:30:27 by relamine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_putnbr_fd(int n, int fd)
{
    if(n == -2147483648)
        ft_putstr_fd("-2147483648",fd);
    else if(n == 2147483647)
        ft_putstr_fd("2147483647",fd);
    else if(n < 0)
    {
        ft_putchar_fd('-',fd);
        n = -n;
        ft_putnbr_fd((n), fd);
    }
    else if (n > 9)
    {
        ft_putnbr_fd((n / 10), fd);
        ft_putnbr_fd((n % 10), fd);
    }
    else
        ft_putchar_fd((n + 48),fd);
}

// int main()
// {
//     int fd = open("foo.txt", O_CREAT | O_WRONLY, 0777);

//     ft_putnbr_fd(00000, fd);
//     close(fd);

//     return 0;
// }